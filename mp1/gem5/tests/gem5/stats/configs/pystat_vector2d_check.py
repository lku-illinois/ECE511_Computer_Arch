# Copyright (c) 2024 The Regents of the University of California
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

import argparse
import json
import sys

import m5
from m5.objects import (
    Root,
    Vector2dStatTester,
)
from m5.stats.gem5stats import get_simstat

"""This script is used for checking that Vector2d statistics set in the
simulation are correctly parsed through to the python Pystats.
"""

parser = argparse.ArgumentParser(
    description="Tests the output of a Vector2D Pystat."
)

parser.add_argument(
    "value",
    help="Comma delimited list representing the 2d vector in a flattened "
    "state.",
    type=lambda s: [float(item) for item in s.split(",")],
)

parser.add_argument(
    "num_vectors",
    help="The number of vectors in the vector of vectors",
    type=int,
)

parser.add_argument(
    "--name",
    type=str,
    default="vector2d",
    required=False,
    help="Name of the vector statistic.",
)

parser.add_argument(
    "--description",
    type=str,
    default="",
    required=False,
    help="Description of the vector statistic.",
)

parser.add_argument(
    "--subnames",
    help="delimited list representing the vector subnames",
    type=str,
)

parser.add_argument(
    "--subdescs",
    help="delimited list representing the vector subdescs",
    type=str,
)

parser.add_argument(
    "--ysubnames",
    help="delimited list representing the vector ysubnames",
    type=str,
)


args = parser.parse_args()

expected_output = None
stat_tester = None

stat_tester = Vector2dStatTester()
stat_tester.name = args.name
stat_tester.description = args.description
stat_tester.subnames = []
if args.subnames:
    stat_tester.subnames = [str(item) for item in args.subnames.split(",")]

stat_tester.subdescs = []
if args.subdescs:
    stat_tester.subdescs = [str(item) for item in args.subdescs.split(",")]

stat_tester.ysubnames = []
if args.ysubnames:
    stat_tester.ysubnames = [str(item) for item in args.ysubnames.split(",")]

assert (
    len(args.value) % args.num_vectors == 0
), "The number of values is not divisable by the number of vectors."

stat_tester.x_size = args.num_vectors
stat_tester.y_size = len(args.value) / args.num_vectors
stat_tester.values = args.value

vectors = {}  # The representation we expect output.
for x in range(args.num_vectors):
    x_index = x if x not in stat_tester.subnames else stat_tester.subnames[x]

    vector = {}
    for y in range(stat_tester.y_size):
        to_add = args.value[
            int(y + (x * (len(args.value) / args.num_vectors)))
        ]
        vector[y] = {
            "value": to_add,
            "type": "Scalar",
            "unit": "Count",
            "description": None,
            "datatype": "f64",
        }

    vectors[x_index] = {
        "type": "Vector",
        "description": (
            stat_tester.subdescs[x]
            if x in stat_tester.subdescs
            else stat_tester.description
        ),
        "value": vector,
    }

expected_output = {
    "type": "SimObject",
    "name": "system",
    "time_conversion": None,
    args.name: {
        "type": "Vector2d",
        "value": vectors,
        "description": args.description,
    },
}

root = Root(full_system=False, system=stat_tester)

m5.instantiate()
m5.simulate()

simstats = get_simstat(stat_tester)
output = simstats.to_json()

# Remove the time related fields from the outputs if they exist.
# `creation_time` is not deterministic, and `simulated_begin_time` and
# simulated_end_time are not under test here.
for field in ["creation_time", "simulated_begin_time", "simulated_end_time"]:
    for map in [output, expected_output]:
        if field in map:
            del map[field]

if output != expected_output:
    print("Output statistics do not match expected:", file=sys.stderr)
    print("", file=sys.stderr)
    print("Expected:", file=sys.stderr)
    print(json.dumps(expected_output, indent=4), file=sys.stderr)
    print("", file=sys.stderr)
    print("Actual:", file=sys.stderr)
    print(json.dumps(output, indent=4), file=sys.stderr)
    sys.exit(1)
