/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_hh.py:123
 */

#ifndef __ENUM__None__CommitPolicy__
#define __ENUM__None__CommitPolicy__

namespace gem5
{
enum class CommitPolicy
{
    RoundRobin = 0,
    OldestReady = 1,
    Num_CommitPolicy = 2
};
extern const char *CommitPolicyStrings[static_cast<int>(CommitPolicy::Num_CommitPolicy)];

} // namespace gem5

#endif // __ENUM__None__CommitPolicy__
