/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:666
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/MI_example/DMARequestMsg.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

namespace MI_example
{

/** \brief Print the state of this object */
void
DMARequestMsg::print(std::ostream& out) const
{
    out << "[DMARequestMsg: ";
    out << "Type = " << m_Type << " ";
    out << "PhysicalAddress = " << printAddress(m_PhysicalAddress, block_size_bits) << " ";
    out << "LineAddress = " << printAddress(m_LineAddress, block_size_bits) << " ";
    out << "Requestor = " << m_Requestor << " ";
    out << "Destination = " << m_Destination << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Len = " << m_Len << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "]";
}
bool
DMARequestMsg::functionalRead(Packet* param_pkt)
{
return (testAndRead(m_LineAddress, m_DataBlk, param_pkt));

}
bool
DMARequestMsg::functionalWrite(Packet* param_pkt)
{
return (testAndWrite(m_LineAddress, m_DataBlk, param_pkt));

}

} // namespace MI_example
} // namespace ruby
} // namespace gem5
