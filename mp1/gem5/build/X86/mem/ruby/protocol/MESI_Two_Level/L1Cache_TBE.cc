/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:666
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/MESI_Two_Level/L1Cache_TBE.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

namespace MESI_Two_Level
{

/** \brief Print the state of this object */
void
L1Cache_TBE::print(std::ostream& out) const
{
    out << "[L1Cache_TBE: ";
    out << "addr = " << printAddress(m_addr, block_size_bits) << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "isPrefetch = " << m_isPrefetch << " ";
    out << "pendingAcks = " << m_pendingAcks << " ";
    out << "isLoadLinked = " << m_isLoadLinked << " ";
    out << "]";
}

} // namespace MESI_Two_Level
} // namespace ruby
} // namespace gem5
