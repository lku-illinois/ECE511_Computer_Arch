/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:585
 */

#ifndef __MESI_Two_Level_Directory_TBE_HH__
#define __MESI_Two_Level_Directory_TBE_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"

#include "mem/ruby/protocol/MESI_Two_Level/Directory_State.hh"
#include "mem/ruby/protocol/DataBlock.hh"
#include "mem/ruby/protocol/MachineID.hh"
namespace gem5
{

namespace ruby
{

class RubySystem;

namespace MESI_Two_Level
{

class Directory_TBE
{
  public:
Directory_TBE(int block_size)
	:
		m_DataBlk(block_size)
{
        // m_PhysicalAddress has no default
        m_TBEState = Directory_State_I;
         // default value of Directory_State
        // m_DataBlk has no default
        m_Len = 0;
         // default value of int
        // m_Requestor has no default
    }
    Directory_TBE(const Directory_TBE&) = default;
    Directory_TBE
    &operator=(const Directory_TBE&) = default;
    Directory_TBE(const Addr& local_PhysicalAddress, const Directory_State& local_TBEState, const DataBlock& local_DataBlk, const int& local_Len, const MachineID& local_Requestor)
    	:
    		m_DataBlk(local_DataBlk)
    {
        m_PhysicalAddress = local_PhysicalAddress;
        m_TBEState = local_TBEState;
        m_Len = local_Len;
        m_Requestor = local_Requestor;
    }
    Directory_TBE*
    clone() const
    {
         return new Directory_TBE(*this);
    }
    void initBlockSize(int block_size)
    {
    	block_size_bits = floorLog2(block_size);
    	m_DataBlk.setBlockSize(block_size);
    }
    void setRubySystem(RubySystem *ruby_system)
    {
    }
    // Const accessors methods for each field
    /** \brief Const accessor method for PhysicalAddress field.
     *  \return PhysicalAddress field
     */
    const Addr&
    getPhysicalAddress() const
    {
        return m_PhysicalAddress;
    }
    /** \brief Const accessor method for TBEState field.
     *  \return TBEState field
     */
    const Directory_State&
    getTBEState() const
    {
        return m_TBEState;
    }
    /** \brief Const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    const DataBlock&
    getDataBlk() const
    {
        return m_DataBlk;
    }
    /** \brief Const accessor method for Len field.
     *  \return Len field
     */
    const int&
    getLen() const
    {
        return m_Len;
    }
    /** \brief Const accessor method for Requestor field.
     *  \return Requestor field
     */
    const MachineID&
    getRequestor() const
    {
        return m_Requestor;
    }
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for PhysicalAddress field.
     *  \return PhysicalAddress field
     */
    Addr&
    getPhysicalAddress()
    {
        return m_PhysicalAddress;
    }
    /** \brief Non-const accessor method for TBEState field.
     *  \return TBEState field
     */
    Directory_State&
    getTBEState()
    {
        return m_TBEState;
    }
    /** \brief Non-const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    DataBlock&
    getDataBlk()
    {
        return m_DataBlk;
    }
    /** \brief Non-const accessor method for Len field.
     *  \return Len field
     */
    int&
    getLen()
    {
        return m_Len;
    }
    /** \brief Non-const accessor method for Requestor field.
     *  \return Requestor field
     */
    MachineID&
    getRequestor()
    {
        return m_Requestor;
    }
    // Mutator methods for each field
    /** \brief Mutator method for PhysicalAddress field */
    void
    setPhysicalAddress(const Addr& local_PhysicalAddress)
    {
        m_PhysicalAddress = local_PhysicalAddress;
    }
    /** \brief Mutator method for TBEState field */
    void
    setTBEState(const Directory_State& local_TBEState)
    {
        m_TBEState = local_TBEState;
    }
    /** \brief Mutator method for DataBlk field */
    void
    setDataBlk(const DataBlock& local_DataBlk)
    {
        m_DataBlk = local_DataBlk;
    }
    /** \brief Mutator method for Len field */
    void
    setLen(const int& local_Len)
    {
        m_Len = local_Len;
    }
    /** \brief Mutator method for Requestor field */
    void
    setRequestor(const MachineID& local_Requestor)
    {
        m_Requestor = local_Requestor;
    }
    void print(std::ostream& out) const;
  //private:
    int block_size_bits = 0;
    /** physical address */
    Addr m_PhysicalAddress;
    /** Transient State */
    Directory_State m_TBEState;
    /** Data to be written (DMA write only) */
    DataBlock m_DataBlk;
    /** ... */
    int m_Len;
    /** The DMA engine that sent the request */
    MachineID m_Requestor;
};
inline ::std::ostream&
operator<<(::std::ostream& out, const Directory_TBE& obj)
{
    obj.print(out);
    out << ::std::flush;
    return out;
}

} // namespace MESI_Two_Level
} // namespace ruby
} // namespace gem5

#endif // __MESI_Two_Level_Directory_TBE_HH__
