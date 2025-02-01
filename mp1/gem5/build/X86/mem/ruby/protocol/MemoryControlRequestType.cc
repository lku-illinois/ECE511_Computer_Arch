/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:1160
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/MemoryControlRequestType.hh"

namespace gem5
{

namespace ruby
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const MemoryControlRequestType& obj)
{
    out << MemoryControlRequestType_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
MemoryControlRequestType_to_string(const MemoryControlRequestType& obj)
{
    switch(obj) {
      case MemoryControlRequestType_Default:
        return "Default";
      default:
        panic("Invalid range for type MemoryControlRequestType");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
MemoryControlRequestType
string_to_MemoryControlRequestType(const std::string& str)
{
    if (str == "Default") {
        return MemoryControlRequestType_Default;
    } else {
        panic("Invalid string conversion for %s, type MemoryControlRequestType", str);
    }
}

// Code to increment an enumeration type
MemoryControlRequestType&
operator++(MemoryControlRequestType& e)
{
    assert(e < MemoryControlRequestType_NUM);
    return e = MemoryControlRequestType(e+1);
}
} // namespace ruby
} // namespace gem5
