/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:1160
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/TransitionResult.hh"

namespace gem5
{

namespace ruby
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const TransitionResult& obj)
{
    out << TransitionResult_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
TransitionResult_to_string(const TransitionResult& obj)
{
    switch(obj) {
      case TransitionResult_Valid:
        return "Valid";
      case TransitionResult_ResourceStall:
        return "ResourceStall";
      case TransitionResult_ProtocolStall:
        return "ProtocolStall";
      case TransitionResult_Reject:
        return "Reject";
      default:
        panic("Invalid range for type TransitionResult");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
TransitionResult
string_to_TransitionResult(const std::string& str)
{
    if (str == "Valid") {
        return TransitionResult_Valid;
    } else if (str == "ResourceStall") {
        return TransitionResult_ResourceStall;
    } else if (str == "ProtocolStall") {
        return TransitionResult_ProtocolStall;
    } else if (str == "Reject") {
        return TransitionResult_Reject;
    } else {
        panic("Invalid string conversion for %s, type TransitionResult", str);
    }
}

// Code to increment an enumeration type
TransitionResult&
operator++(TransitionResult& e)
{
    assert(e < TransitionResult_NUM);
    return e = TransitionResult(e+1);
}
} // namespace ruby
} // namespace gem5
