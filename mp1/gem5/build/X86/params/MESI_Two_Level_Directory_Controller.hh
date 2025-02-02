/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__MESI_Two_Level_Directory_Controller__
#define __PARAMS__MESI_Two_Level_Directory_Controller__

namespace gem5 {
namespace ruby {
namespace MESI_Two_Level {
class Directory_Controller;
} // namespace MESI_Two_Level
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "params/RubyDirectoryMemory.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/RubyController.hh"

namespace gem5
{
struct MESI_Two_Level_Directory_ControllerParams
    : public RubyControllerParams
{
    gem5::ruby::MESI_Two_Level::Directory_Controller * create() const;
    gem5::ruby::DirectoryMemory * directory;
    Cycles directory_latency;
    gem5::ruby::MessageBuffer * requestToDir;
    gem5::ruby::MessageBuffer * requestToMemory;
    gem5::ruby::MessageBuffer * responseFromDir;
    gem5::ruby::MessageBuffer * responseFromMemory;
    gem5::ruby::MessageBuffer * responseToDir;
    Cycles to_mem_ctrl_latency;
};

} // namespace gem5

#endif // __PARAMS__MESI_Two_Level_Directory_Controller__
