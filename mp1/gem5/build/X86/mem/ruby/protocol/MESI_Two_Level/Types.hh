/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/SymbolTable.py:155
 */

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"
#include "mem/ruby/protocol/WriteMask.hh"
#include "mem/ruby/protocol/DataBlock.hh"
#include "mem/ruby/protocol/AccessPermission.hh"
#include "mem/ruby/protocol/TesterStatus.hh"
#include "mem/ruby/protocol/InvalidateGeneratorStatus.hh"
#include "mem/ruby/protocol/SeriesRequestGeneratorStatus.hh"
#include "mem/ruby/protocol/LockStatus.hh"
#include "mem/ruby/protocol/SequencerStatus.hh"
#include "mem/ruby/protocol/TransitionResult.hh"
#include "mem/ruby/protocol/RubyRequestType.hh"
#include "mem/ruby/protocol/HtmCallbackMode.hh"
#include "mem/ruby/protocol/HtmFailedInCacheReason.hh"
#include "mem/ruby/protocol/SequencerRequestType.hh"
#include "mem/ruby/protocol/CacheRequestType.hh"
#include "mem/ruby/protocol/CacheResourceType.hh"
#include "mem/ruby/protocol/DirectoryRequestType.hh"
#include "mem/ruby/protocol/DMASequencerRequestType.hh"
#include "mem/ruby/protocol/MemoryControlRequestType.hh"
#include "mem/ruby/protocol/MachineType.hh"
#include "mem/ruby/protocol/MessageSizeType.hh"
#include "mem/ruby/protocol/AccessType.hh"
#include "mem/ruby/protocol/RubyAccessMode.hh"
#include "mem/ruby/protocol/PrefetchBit.hh"
#include "mem/ruby/protocol/SequencerMsg.hh"
#include "mem/ruby/protocol/MaskPredictorType.hh"
#include "mem/ruby/protocol/MaskPredictorIndex.hh"
#include "mem/ruby/protocol/MaskPredictorTraining.hh"
#include "mem/ruby/protocol/RequestStatus.hh"
#include "mem/ruby/protocol/LinkDirection.hh"
#include "mem/ruby/protocol/MachineID.hh"
#include "mem/ruby/protocol/Set.hh"
#include "mem/ruby/protocol/NetDest.hh"
#include "mem/ruby/protocol/Sequencer.hh"
#include "mem/ruby/protocol/HTMSequencer.hh"
#include "mem/ruby/protocol/RubyRequest.hh"
#include "mem/ruby/protocol/DirectoryMemory.hh"
#include "mem/ruby/protocol/CacheMemory.hh"
#include "mem/ruby/protocol/WireBuffer.hh"
#include "mem/ruby/protocol/DMASequencer.hh"
#include "mem/ruby/protocol/TimerTable.hh"
#include "mem/ruby/protocol/RubyPrefetcher.hh"
#include "mem/ruby/protocol/RubyPrefetcherProxy.hh"
#include "mem/ruby/protocol/BoolVec.hh"
#include "mem/ruby/protocol/MemoryRequestType.hh"
#include "mem/ruby/protocol/MemoryMsg.hh"
#include "mem/ruby/protocol/MESI_Two_Level/CoherenceRequestType.hh"
#include "mem/ruby/protocol/MESI_Two_Level/CoherenceResponseType.hh"
#include "mem/ruby/protocol/MESI_Two_Level/RequestMsg.hh"
#include "mem/ruby/protocol/MESI_Two_Level/ResponseMsg.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L1Cache_State.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L1Cache_Event.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L1Cache_Entry.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L1Cache_TBE.hh"
#include "mem/ruby/protocol/TBETable.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L2Cache_State.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L2Cache_Event.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L2Cache_Entry.hh"
#include "mem/ruby/protocol/MESI_Two_Level/L2Cache_TBE.hh"
#include "mem/ruby/protocol/TBETable.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_State.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_Event.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_Entry.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_TBE.hh"
#include "mem/ruby/protocol/TBETable.hh"
#include "mem/ruby/protocol/MESI_Two_Level/DMA_State.hh"
#include "mem/ruby/protocol/MESI_Two_Level/DMA_Event.hh"
#include "mem/ruby/protocol/MESI_Two_Level/DMA_TBE.hh"
#include "mem/ruby/protocol/TBETable.hh"
#include "mem/ruby/protocol/MESI_Two_Level/MESI_Two_LevelProtocolInfo.hh"
