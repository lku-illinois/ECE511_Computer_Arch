/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:1160
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_State.hh"

namespace gem5
{

namespace ruby
{

namespace MESI_Two_Level
{

// Code to convert the current state to an access permission
AccessPermission Directory_State_to_permission(const Directory_State& obj)
{
    switch(obj) {
      case Directory_State_I:
        return AccessPermission_Read_Write;
      case Directory_State_ID:
        return AccessPermission_Busy;
      case Directory_State_ID_W:
        return AccessPermission_Busy;
      case Directory_State_M:
        return AccessPermission_Maybe_Stale;
      case Directory_State_IM:
        return AccessPermission_Busy;
      case Directory_State_MI:
        return AccessPermission_Busy;
      case Directory_State_M_DRD:
        return AccessPermission_Busy;
      case Directory_State_M_DRDI:
        return AccessPermission_Busy;
      case Directory_State_M_DWR:
        return AccessPermission_Busy;
      case Directory_State_M_DWRI:
        return AccessPermission_Busy;
      default:
        panic("Unknown state access permission converstion for Directory_State");
    }
    // Appease the compiler since this function has a return value
    return AccessPermission_Invalid;
}

} // namespace MESI_Two_Level

} // namespace ruby
} // namespace gem5

namespace gem5
{

namespace ruby
{

namespace MESI_Two_Level
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const Directory_State& obj)
{
    out << Directory_State_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
Directory_State_to_string(const Directory_State& obj)
{
    switch(obj) {
      case Directory_State_I:
        return "I";
      case Directory_State_ID:
        return "ID";
      case Directory_State_ID_W:
        return "ID_W";
      case Directory_State_M:
        return "M";
      case Directory_State_IM:
        return "IM";
      case Directory_State_MI:
        return "MI";
      case Directory_State_M_DRD:
        return "M_DRD";
      case Directory_State_M_DRDI:
        return "M_DRDI";
      case Directory_State_M_DWR:
        return "M_DWR";
      case Directory_State_M_DWRI:
        return "M_DWRI";
      default:
        panic("Invalid range for type Directory_State");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
Directory_State
string_to_Directory_State(const std::string& str)
{
    if (str == "I") {
        return Directory_State_I;
    } else if (str == "ID") {
        return Directory_State_ID;
    } else if (str == "ID_W") {
        return Directory_State_ID_W;
    } else if (str == "M") {
        return Directory_State_M;
    } else if (str == "IM") {
        return Directory_State_IM;
    } else if (str == "MI") {
        return Directory_State_MI;
    } else if (str == "M_DRD") {
        return Directory_State_M_DRD;
    } else if (str == "M_DRDI") {
        return Directory_State_M_DRDI;
    } else if (str == "M_DWR") {
        return Directory_State_M_DWR;
    } else if (str == "M_DWRI") {
        return Directory_State_M_DWRI;
    } else {
        panic("Invalid string conversion for %s, type Directory_State", str);
    }
}

// Code to increment an enumeration type
Directory_State&
operator++(Directory_State& e)
{
    assert(e < Directory_State_NUM);
    return e = Directory_State(e+1);
}

} // namespace MESI_Two_Level
} // namespace ruby
} // namespace gem5
