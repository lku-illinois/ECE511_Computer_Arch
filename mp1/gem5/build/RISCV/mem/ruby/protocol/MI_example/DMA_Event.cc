/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:1160
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/MI_example/DMA_Event.hh"

namespace gem5
{

namespace ruby
{

namespace MI_example
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const DMA_Event& obj)
{
    out << DMA_Event_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
DMA_Event_to_string(const DMA_Event& obj)
{
    switch(obj) {
      case DMA_Event_ReadRequest:
        return "ReadRequest";
      case DMA_Event_WriteRequest:
        return "WriteRequest";
      case DMA_Event_Data:
        return "Data";
      case DMA_Event_Ack:
        return "Ack";
      default:
        panic("Invalid range for type DMA_Event");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
DMA_Event
string_to_DMA_Event(const std::string& str)
{
    if (str == "ReadRequest") {
        return DMA_Event_ReadRequest;
    } else if (str == "WriteRequest") {
        return DMA_Event_WriteRequest;
    } else if (str == "Data") {
        return DMA_Event_Data;
    } else if (str == "Ack") {
        return DMA_Event_Ack;
    } else {
        panic("Invalid string conversion for %s, type DMA_Event", str);
    }
}

// Code to increment an enumeration type
DMA_Event&
operator++(DMA_Event& e)
{
    assert(e < DMA_Event_NUM);
    return e = DMA_Event(e+1);
}

} // namespace MI_example
} // namespace ruby
} // namespace gem5
