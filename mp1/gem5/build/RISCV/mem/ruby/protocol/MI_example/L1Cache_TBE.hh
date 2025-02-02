/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/Type.py:585
 */

#ifndef __MI_example_L1Cache_TBE_HH__
#define __MI_example_L1Cache_TBE_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"

#include "mem/ruby/protocol/MI_example/L1Cache_State.hh"
#include "mem/ruby/protocol/DataBlock.hh"
namespace gem5
{

namespace ruby
{

class RubySystem;

namespace MI_example
{

class L1Cache_TBE
{
  public:
L1Cache_TBE(int block_size)
	:
		m_DataBlk(block_size)
{
        m_TBEState = L1Cache_State_NUM;
         // default value of L1Cache_State
        // m_DataBlk has no default
    }
    L1Cache_TBE(const L1Cache_TBE&) = default;
    L1Cache_TBE
    &operator=(const L1Cache_TBE&) = default;
    L1Cache_TBE(const L1Cache_State& local_TBEState, const DataBlock& local_DataBlk)
    	:
    		m_DataBlk(local_DataBlk)
    {
        m_TBEState = local_TBEState;
    }
    L1Cache_TBE*
    clone() const
    {
         return new L1Cache_TBE(*this);
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
    /** \brief Const accessor method for TBEState field.
     *  \return TBEState field
     */
    const L1Cache_State&
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
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for TBEState field.
     *  \return TBEState field
     */
    L1Cache_State&
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
    // Mutator methods for each field
    /** \brief Mutator method for TBEState field */
    void
    setTBEState(const L1Cache_State& local_TBEState)
    {
        m_TBEState = local_TBEState;
    }
    /** \brief Mutator method for DataBlk field */
    void
    setDataBlk(const DataBlock& local_DataBlk)
    {
        m_DataBlk = local_DataBlk;
    }
    void print(std::ostream& out) const;
  //private:
    int block_size_bits = 0;
    /** Transient state */
    L1Cache_State m_TBEState;
    /** data for the block, required for concurrent writebacks */
    DataBlock m_DataBlk;
};
inline ::std::ostream&
operator<<(::std::ostream& out, const L1Cache_TBE& obj)
{
    obj.print(out);
    out << ::std::flush;
    return out;
}

} // namespace MI_example
} // namespace ruby
} // namespace gem5

#endif // __MI_example_L1Cache_TBE_HH__
