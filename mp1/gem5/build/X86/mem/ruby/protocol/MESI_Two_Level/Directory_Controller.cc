/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/StateMachine.py:1469
 */

// Created by slicc definition of Module "MESI Two Level directory protocol"

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <sstream>
#include <string>
#include <typeinfo>

#include "mem/ruby/common/BoolVec.hh"

#include "base/compiler.hh"
#include "base/cprintf.hh"

#include "debug/RubyGenerated.hh"
#include "debug/RubySlicc.hh"
#include "mem/ruby/network/Network.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_Controller.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_Event.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Directory_State.hh"
#include "mem/ruby/protocol/MESI_Two_Level/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"
#include "mem/ruby/protocol/TBETable.hh"
namespace gem5
{

namespace ruby
{

namespace MESI_Two_Level
{

// for adding information to the protocol debug trace
std::stringstream Directory_transitionComment;

#ifndef NDEBUG
#define APPEND_TRANSITION_COMMENT(str) (Directory_transitionComment << str)
#else
#define APPEND_TRANSITION_COMMENT(str) do {} while (0)
#endif

/** \brief constructor */
Directory_Controller::Directory_Controller(const Params &p)
    : AbstractController(p)
{
    m_machineID.type = MachineType_Directory;
    m_machineID.num = m_version;
    p.ruby_system->m_num_controllers[MachineType_Directory]++;
    p.ruby_system->registerAbstractController(this, std::make_unique<MESI_Two_LevelProtocolInfo>());
    m_ruby_system = p.ruby_system;

    m_in_ports = 3;
    m_directory_ptr = p.directory;
    m_to_mem_ctrl_latency = p.to_mem_ctrl_latency;
    m_directory_latency = p.directory_latency;
    m_requestToDir_ptr = p.requestToDir;
    m_responseToDir_ptr = p.responseToDir;
    m_responseFromDir_ptr = p.responseFromDir;
    m_requestToMemory_ptr = p.requestToMemory;
    m_responseFromMemory_ptr = p.responseFromMemory;

    for (int state = 0; state < Directory_State_NUM; state++) {
        for (int event = 0; event < Directory_Event_NUM; event++) {
            m_possible[state][event] = false;
            m_counters[state][event] = 0;
        }
    }
    for (int event = 0; event < Directory_Event_NUM; event++) {
        m_event_counters[event] = 0;
    }
}

void
Directory_Controller::initNetQueues()
{
    MachineType machine_type = string_to_MachineType("Directory");
    [[maybe_unused]] int base = m_ruby_system->MachineType_base_number(machine_type);

    assert(m_requestToDir_ptr != NULL);
    m_net_ptr->setFromNetQueue(m_version + base, m_requestToDir_ptr->getOrdered(), 0,
                                     "request", m_requestToDir_ptr);
    assert(m_responseToDir_ptr != NULL);
    m_net_ptr->setFromNetQueue(m_version + base, m_responseToDir_ptr->getOrdered(), 1,
                                     "response", m_responseToDir_ptr);
    assert(m_responseFromDir_ptr != NULL);
    m_net_ptr->setToNetQueue(m_version + base, m_responseFromDir_ptr->getOrdered(), 1,
                                     "response", m_responseFromDir_ptr);
}

void
Directory_Controller::init()
{
    // initialize objects
    m_TBEs_ptr  = new TBETable<Directory_TBE>(m_number_of_TBEs);
    assert(m_TBEs_ptr != NULL);
    (*m_TBEs_ptr).setBlockSize(m_ruby_system->getBlockSizeBytes());


    (*m_requestToDir_ptr).setConsumer(this);
    (*m_responseToDir_ptr).setConsumer(this);
    (*m_responseFromMemory_ptr).setConsumer(this);

    possibleTransition(Directory_State_I, Directory_Event_Fetch);
    possibleTransition(Directory_State_M, Directory_Event_Fetch);
    possibleTransition(Directory_State_IM, Directory_Event_Memory_Data);
    possibleTransition(Directory_State_M, Directory_Event_CleanReplacement);
    possibleTransition(Directory_State_M, Directory_Event_Data);
    possibleTransition(Directory_State_MI, Directory_Event_Memory_Ack);
    possibleTransition(Directory_State_I, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_ID, Directory_Event_Memory_Data);
    possibleTransition(Directory_State_I, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_ID_W, Directory_Event_Memory_Ack);
    possibleTransition(Directory_State_ID, Directory_Event_Fetch);
    possibleTransition(Directory_State_ID, Directory_Event_Data);
    possibleTransition(Directory_State_ID_W, Directory_Event_Fetch);
    possibleTransition(Directory_State_ID_W, Directory_Event_Data);
    possibleTransition(Directory_State_M_DRDI, Directory_Event_Fetch);
    possibleTransition(Directory_State_M_DRDI, Directory_Event_Data);
    possibleTransition(Directory_State_M_DWRI, Directory_Event_Fetch);
    possibleTransition(Directory_State_M_DWRI, Directory_Event_Data);
    possibleTransition(Directory_State_IM, Directory_Event_Fetch);
    possibleTransition(Directory_State_IM, Directory_Event_Data);
    possibleTransition(Directory_State_MI, Directory_Event_Fetch);
    possibleTransition(Directory_State_MI, Directory_Event_Data);
    possibleTransition(Directory_State_ID, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_ID, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_ID_W, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_ID_W, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_M_DRD, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_M_DRD, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_M_DRDI, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_M_DRDI, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_M_DWR, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_M_DWR, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_M_DWRI, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_M_DWRI, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_IM, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_IM, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_MI, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_MI, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_M, Directory_Event_DMA_READ);
    possibleTransition(Directory_State_M_DRD, Directory_Event_Data);
    possibleTransition(Directory_State_M_DRDI, Directory_Event_Memory_Ack);
    possibleTransition(Directory_State_M, Directory_Event_DMA_WRITE);
    possibleTransition(Directory_State_M_DWR, Directory_Event_Data);
    possibleTransition(Directory_State_M_DWRI, Directory_Event_Memory_Ack);
    AbstractController::init();
    resetStats();
}

Sequencer*
Directory_Controller::getCPUSequencer() const
{
    return NULL;
}

DMASequencer*
Directory_Controller::getDMASequencer() const
{
    return NULL;
}

GPUCoalescer*
Directory_Controller::getGPUCoalescer() const
{
    return NULL;
}

void
Directory_Controller::regStats()
{
    AbstractController::regStats();

    // For each type of controllers, one controller of that type is picked
    // to aggregate stats of all controllers of that type.
    if (m_version == 0) {

        Profiler *profiler = params().ruby_system->getProfiler();
        statistics::Group *profilerStatsPtr = &profiler->rubyProfilerStats;

        for (Directory_Event event = Directory_Event_FIRST;
             event < Directory_Event_NUM; ++event) {
            std::string stat_name =
                "Directory_Controller." + Directory_Event_to_string(event);
            statistics::Vector *t =
                new statistics::Vector(profilerStatsPtr, stat_name.c_str());
            int num_controllers =
                m_ruby_system->m_num_controllers[MachineType_Directory];
            t->init(num_controllers);
            t->flags(statistics::pdf | statistics::total |
                statistics::oneline | statistics::nozero);

            eventVec.push_back(t);
        }

        for (Directory_State state = Directory_State_FIRST;
             state < Directory_State_NUM; ++state) {

            transVec.push_back(std::vector<statistics::Vector *>());

            for (Directory_Event event = Directory_Event_FIRST;
                 event < Directory_Event_NUM; ++event) {
                std::string stat_name = "Directory_Controller." +
                    Directory_State_to_string(state) +
                    "." + Directory_Event_to_string(event);
                statistics::Vector *t = new statistics::Vector(
                    profilerStatsPtr, stat_name.c_str());
                int num_controllers =
                    m_ruby_system->m_num_controllers[MachineType_Directory];
                t->init(num_controllers);
                t->flags(statistics::pdf | statistics::total |
                    statistics::oneline | statistics::nozero);
                transVec[state].push_back(t);
            }
        }
    }

    const std::vector<Directory_Event> out_trans_evs = {};
    const std::vector<Directory_Event> in_trans_evs = {};
    const std::unordered_map<Directory_Event, std::vector<Directory_State>>
                                in_trans_evs_states = {};

    for (const auto event : out_trans_evs) {
        std::string stat_name =
            "outTransLatHist." + Directory_Event_to_string(event);
        statistics::Histogram* t =
            new statistics::Histogram(&stats, stat_name.c_str());
        stats.outTransLatHist[event] = t;
        t->init(5);
        t->flags(statistics::pdf | statistics::total |
                 statistics::oneline | statistics::nozero);

        statistics::Scalar* r = new statistics::Scalar(&stats,
                                             (stat_name + ".retries").c_str());
        stats.outTransRetryCnt[event] = r;
        r->flags(statistics::nozero);
    }

    for (const auto event : in_trans_evs) {
        std::string stat_name =
            "inTransLatHist." + Directory_Event_to_string(event);
        statistics::Histogram* t =
            new statistics::Histogram(&stats, stat_name.c_str());
        stats.inTransLatHist[event] = t;
        t->init(5);
        t->flags(statistics::pdf | statistics::total |
                 statistics::oneline | statistics::nozero);

        statistics::Scalar* r = new statistics::Scalar(&stats,
                                             (stat_name + ".retries").c_str());
        stats.inTransRetryCnt[event] = r;
        r->flags(statistics::nozero);

        auto &src_states = stats.inTransStateChanges[event];
        for (const auto initial_state : in_trans_evs_states.at(event)) {
            auto &dst_vector = src_states[initial_state];
            for (Directory_State final_state = Directory_State_FIRST;
                 final_state < Directory_State_NUM; ++final_state) {
                std::string stat_name = "inTransLatHist." +
                    Directory_Event_to_string(event) + "." +
                    Directory_State_to_string(initial_state) + "." +
                    Directory_State_to_string(final_state) + ".total";
                statistics::Scalar* t =
                    new statistics::Scalar(&stats, stat_name.c_str());
                t->flags(statistics::nozero);
                dst_vector.push_back(t);
            }
        }
    }
}

void
Directory_Controller::collateStats()
{
    int num_controllers =
        m_ruby_system->m_num_controllers[MachineType_Directory];

    for (Directory_Event event = Directory_Event_FIRST;
         event < Directory_Event_NUM; ++event) {
        for (unsigned int i = 0; i < num_controllers; ++i) {
            RubySystem *rs = params().ruby_system;
            std::map<uint32_t, AbstractController *>::iterator it =
                     rs->m_abstract_controls[MachineType_Directory].find(i);
            assert(it != rs->m_abstract_controls[MachineType_Directory].end());
            (*eventVec[event])[i] =
                ((Directory_Controller *)(*it).second)->getEventCount(event);
        }
    }

    for (Directory_State state = Directory_State_FIRST;
         state < Directory_State_NUM; ++state) {

        for (Directory_Event event = Directory_Event_FIRST;
             event < Directory_Event_NUM; ++event) {

            for (unsigned int i = 0; i < num_controllers; ++i) {
                RubySystem *rs = params().ruby_system;
                std::map<uint32_t, AbstractController *>::iterator it =
                         rs->m_abstract_controls[MachineType_Directory].find(i);
                assert(it != rs->m_abstract_controls[MachineType_Directory].end());
                (*transVec[state][event])[i] =
                    ((Directory_Controller *)(*it).second)->getTransitionCount(state, event);
            }
        }
    }
}

void
Directory_Controller::countTransition(Directory_State state, Directory_Event event)
{
    assert(m_possible[state][event]);
    m_counters[state][event]++;
    m_event_counters[event]++;
}
void
Directory_Controller::possibleTransition(Directory_State state,
                             Directory_Event event)
{
    m_possible[state][event] = true;
}

uint64_t
Directory_Controller::getEventCount(Directory_Event event)
{
    return m_event_counters[event];
}

bool
Directory_Controller::isPossible(Directory_State state, Directory_Event event)
{
    return m_possible[state][event];
}

uint64_t
Directory_Controller::getTransitionCount(Directory_State state,
                             Directory_Event event)
{
    return m_counters[state][event];
}

MessageBuffer*
Directory_Controller::getMandatoryQueue() const
{
    return NULL;
}

MessageBuffer*
Directory_Controller::getMemReqQueue() const
{
    return m_requestToMemory_ptr;
}

MessageBuffer*
Directory_Controller::getMemRespQueue() const
{
    return m_responseFromMemory_ptr;
}

void
Directory_Controller::print(std::ostream& out) const
{
    out << "[Directory_Controller " << m_version << "]";
}

void Directory_Controller::resetStats()
{
    for (int state = 0; state < Directory_State_NUM; state++) {
        for (int event = 0; event < Directory_Event_NUM; event++) {
            m_counters[state][event] = 0;
        }
    }

    for (int event = 0; event < Directory_Event_NUM; event++) {
        m_event_counters[event] = 0;
    }

    AbstractController::resetStats();
}

// Set and Reset for tbe variable
void
Directory_Controller::set_tbe(Directory_TBE*& m_tbe_ptr, Directory_TBE* m_new_tbe)
{
  m_tbe_ptr = m_new_tbe;
  m_tbe_ptr->setRubySystem(m_ruby_system);
}

void
Directory_Controller::unset_tbe(Directory_TBE*& m_tbe_ptr)
{
  m_tbe_ptr = NULL;
}

void
Directory_Controller::recordCacheTrace(int cntrl, CacheRecorder* tr)
{
}

// Actions
/** \brief Send ack to L2 */
void
Directory_Controller::a_sendAck(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing a_sendAck\n");
    {
    // Declare message
    [[maybe_unused]] const ResponseMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_MEMORY_ACK;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add(((*in_msg_ptr)).m_Sender));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Control;
    ((*m_responseFromDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Send data to requestor */
void
Directory_Controller::d_sendData(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing d_sendData\n");
    {
    // Declare message
    [[maybe_unused]] const MemoryMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const MemoryMsg *>(((*m_responseFromMemory_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_MEMORY_DATA;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add(((*in_msg_ptr)).m_OriginalRequestorMachId));
    (*out_msg).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
    (*out_msg).m_Dirty = (false);
    (*out_msg).m_MessageSize = MessageSizeType_Response_Data;
    Directory_Entry* e
     = (getDirectoryEntry(((*in_msg_ptr)).m_addr));
    (*e).m_Owner = ((*in_msg_ptr)).m_OriginalRequestorMachId;
    ((*m_responseFromDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Send ack to L2 */
void
Directory_Controller::aa_sendAck(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing aa_sendAck\n");
    {
    // Declare message
    [[maybe_unused]] const MemoryMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const MemoryMsg *>(((*m_responseFromMemory_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_MEMORY_ACK;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add(((*in_msg_ptr)).m_OriginalRequestorMachId));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Control;
    ((*m_responseFromDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Pop incoming request queue */
void
Directory_Controller::j_popIncomingRequestQueue(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing j_popIncomingRequestQueue\n");
    (((*m_requestToDir_ptr)).dequeue((clockEdge())));

}

/** \brief Pop incoming request queue */
void
Directory_Controller::k_popIncomingResponseQueue(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing k_popIncomingResponseQueue\n");
    (((*m_responseToDir_ptr)).dequeue((clockEdge())));

}

/** \brief Pop off-chip request queue */
void
Directory_Controller::l_popMemQueue(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing l_popMemQueue\n");
    (dequeueMemRespQueue());

}

/** \brief wake-up dependents */
void
Directory_Controller::kd_wakeUpDependents(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing kd_wakeUpDependents\n");
    (wakeUpBuffers(addr));

}

/** \brief Queue off-chip fetch request */
void
Directory_Controller::qf_queueMemoryFetchRequest(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing qf_queueMemoryFetchRequest\n");
    {
    // Declare message
    [[maybe_unused]] const RequestMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<MemoryMsg> out_msg = std::make_shared<MemoryMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = MemoryRequestType_MEMORY_READ;
    (*out_msg).m_Sender = ((*in_msg_ptr)).m_Requestor;
    (*out_msg).m_MessageSize = MessageSizeType_Request_Control;
    (*out_msg).m_Len = (0);
    ((*m_requestToMemory_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Queue off-chip writeback request */
void
Directory_Controller::qw_queueMemoryWBRequest(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing qw_queueMemoryWBRequest\n");
    {
    // Declare message
    [[maybe_unused]] const ResponseMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<MemoryMsg> out_msg = std::make_shared<MemoryMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = MemoryRequestType_MEMORY_WB;
    (*out_msg).m_Sender = ((*in_msg_ptr)).m_Sender;
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Data;
    (*out_msg).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
    (*out_msg).m_Len = (0);
    ((*m_requestToMemory_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Queue off-chip fetch request */
void
Directory_Controller::qf_queueMemoryFetchRequestDMA(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing qf_queueMemoryFetchRequestDMA\n");
    {
    // Declare message
    [[maybe_unused]] const RequestMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<MemoryMsg> out_msg = std::make_shared<MemoryMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = MemoryRequestType_MEMORY_READ;
    (*out_msg).m_Sender = ((*in_msg_ptr)).m_Requestor;
    (*out_msg).m_MessageSize = MessageSizeType_Request_Control;
    (*out_msg).m_Len = (0);
    ((*m_requestToMemory_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Pop incoming DMA queue */
void
Directory_Controller::p_popIncomingDMARequestQueue(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing p_popIncomingDMARequestQueue\n");
    (((*m_requestToDir_ptr)).dequeue((clockEdge())));

}

/** \brief Send Data to DMA controller from directory */
void
Directory_Controller::dr_sendDMAData(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing dr_sendDMAData\n");
    {
    // Declare message
    [[maybe_unused]] const MemoryMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const MemoryMsg *>(((*m_responseFromMemory_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    #ifndef NDEBUG
    if (!((m_tbe_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-dir.sm:358: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
    (((*out_msg).m_Destination).add((*m_tbe_ptr).m_Requestor));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Data;
    ((*m_responseFromDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Queue off-chip writeback request */
void
Directory_Controller::qw_queueMemoryWBRequest_partial(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing qw_queueMemoryWBRequest_partial\n");
    {
    // Declare message
    [[maybe_unused]] const RequestMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<MemoryMsg> out_msg = std::make_shared<MemoryMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = ((*in_msg_ptr)).m_addr;
    (*out_msg).m_Type = MemoryRequestType_MEMORY_WB;
    (*out_msg).m_Sender = m_machineID;
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Data;
    (*out_msg).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
    (*out_msg).m_Len = ((*in_msg_ptr)).m_Len;
    ((*m_requestToMemory_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Send Ack to DMA controller */
void
Directory_Controller::da_sendDMAAck(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing da_sendDMAAck\n");
    {
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    #ifndef NDEBUG
    if (!((m_tbe_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-dir.sm:384: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_ACK;
    (((*out_msg).m_Destination).add((*m_tbe_ptr).m_Requestor));
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Control;
    ((*m_responseFromDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}

}

/** \brief recycle request queue */
void
Directory_Controller::z_stallAndWaitRequest(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing z_stallAndWaitRequest\n");
            stallBuffer(&((*m_requestToDir_ptr)), addr);
        (*m_requestToDir_ptr).stallMessage(addr, clockEdge());
        

}

/** \brief recycle DMA queue */
void
Directory_Controller::zz_recycleDMAQueue(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing zz_recycleDMAQueue\n");
    (((*m_requestToDir_ptr)).recycle((clockEdge()), (cyclesToTicks(m_recycle_latency))));

}

/** \brief Invalidate a cache block */
void
Directory_Controller::inv_sendCacheInvalidate(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing inv_sendCacheInvalidate\n");
    {
    // Declare message
    [[maybe_unused]] const RequestMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_INV;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add((*(getDirectoryEntry(addr))).m_Owner));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Control;
    ((*m_responseFromDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_directory_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Send Data to DMA controller from incoming PUTX */
void
Directory_Controller::drp_sendDMAData(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing drp_sendDMAData\n");
    {
    // Declare message
    [[maybe_unused]] const ResponseMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    #ifndef NDEBUG
    if (!((m_tbe_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-dir.sm:416: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
    (((*out_msg).m_Destination).add((*m_tbe_ptr).m_Requestor));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Data;
    ((*m_responseFromDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Allocate TBE */
void
Directory_Controller::v_allocateTBE(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing v_allocateTBE\n");
    {
    // Declare message
    [[maybe_unused]] const RequestMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
(((*m_TBEs_ptr)).allocate(addr));
set_tbe(m_tbe_ptr, (((*m_TBEs_ptr)).lookup(addr)));;
(*m_tbe_ptr).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
(*m_tbe_ptr).m_PhysicalAddress = ((*in_msg_ptr)).m_addr;
(*m_tbe_ptr).m_Len = ((*in_msg_ptr)).m_Len;
(*m_tbe_ptr).m_Requestor = ((*in_msg_ptr)).m_Requestor;
}

}

/** \brief Queue off-chip writeback request */
void
Directory_Controller::qw_queueMemoryWBRequest_partialTBE(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing qw_queueMemoryWBRequest_partialTBE\n");
    {
    // Declare message
    [[maybe_unused]] const ResponseMsg* in_msg_ptr;
    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<MemoryMsg> out_msg = std::make_shared<MemoryMsg>(clockEdge(),     m_ruby_system->getBlockSizeBytes(), m_ruby_system);
    (*out_msg).m_addr = (*m_tbe_ptr).m_PhysicalAddress;
    (*out_msg).m_Type = MemoryRequestType_MEMORY_WB;
    (*out_msg).m_Sender = ((*in_msg_ptr)).m_Sender;
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Data;
    (*out_msg).m_DataBlk = (*m_tbe_ptr).m_DataBlk;
    (*out_msg).m_Len = (*m_tbe_ptr).m_Len;
    ((*m_requestToMemory_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_mem_ctrl_latency)), m_ruby_system->getRandomization(), m_ruby_system->getWarmupEnabled());
}
}

}

/** \brief Deallocate TBE */
void
Directory_Controller::w_deallocateTBE(Directory_TBE*& m_tbe_ptr, Addr addr)
{
    DPRINTF(RubyGenerated, "executing w_deallocateTBE\n");
    (((*m_TBEs_ptr)).deallocate(addr));
unset_tbe(m_tbe_ptr);;

}

Directory_Entry*
Directory_Controller::getDirectoryEntry(const Addr& param_addr)
{
Directory_Entry* dir_entry
 = static_cast<Directory_Entry *>((((*m_directory_ptr)).lookup(param_addr)))
;
    if ((dir_entry != NULL)) {
        return dir_entry;
    }
    dir_entry = static_cast<Directory_Entry *>((((*m_directory_ptr)).allocate(param_addr, new Directory_Entry)))
    ;
    return dir_entry;

}
Directory_State
Directory_Controller::getState(Directory_TBE* param_tbe, const Addr& param_addr)
{
    if ((param_tbe != NULL)) {
        return (*param_tbe).m_TBEState;
    } else {
            if ((((*m_directory_ptr)).isPresent(param_addr))) {
                return (*(getDirectoryEntry(param_addr))).m_DirectoryState;
            } else {
                return Directory_State_I;
            }
        }

}
void
Directory_Controller::setState(Directory_TBE* param_tbe, const Addr& param_addr, const Directory_State& param_state)
{
    if ((param_tbe != NULL)) {
        (*param_tbe).m_TBEState = param_state;
    }
        if ((((*m_directory_ptr)).isPresent(param_addr))) {
            (*(getDirectoryEntry(param_addr))).m_DirectoryState = param_state;
        }

}
AccessPermission
Directory_Controller::getAccessPermission(const Addr& param_addr)
{
Directory_TBE* tbe
 = (((*m_TBEs_ptr)).lookup(param_addr));
    if ((tbe != NULL)) {
        DPRINTF(RubySlicc, "MESI_Two_Level-dir.sm:144: %s\n", (Directory_State_to_permission((*tbe).m_TBEState)));
        return (Directory_State_to_permission((*tbe).m_TBEState));
    }
        if ((((*m_directory_ptr)).isPresent(param_addr))) {
            DPRINTF(RubySlicc, "MESI_Two_Level-dir.sm:149: %s\n", (Directory_State_to_permission((*(getDirectoryEntry(param_addr))).m_DirectoryState)));
            return (Directory_State_to_permission((*(getDirectoryEntry(param_addr))).m_DirectoryState));
        }
        DPRINTF(RubySlicc, "MESI_Two_Level-dir.sm:153: %s\n", AccessPermission_NotPresent);
        return AccessPermission_NotPresent;

}
void
Directory_Controller::functionalRead(const Addr& param_addr, Packet* param_pkt)
{
Directory_TBE* tbe
 = (((*m_TBEs_ptr)).lookup(param_addr));
    if ((tbe != NULL)) {
        (testAndRead(param_addr, (*tbe).m_DataBlk, param_pkt));
    } else {
        (functionalMemoryRead(param_pkt));
    }

}
int
Directory_Controller::functionalReadPriority()
{
return (30);

}
int
Directory_Controller::functionalWrite(const Addr& param_addr, Packet* param_pkt)
{
int num_functional_writes
 = (0);
Directory_TBE* tbe
 = (((*m_TBEs_ptr)).lookup(param_addr));
    if ((tbe != NULL)) {
        num_functional_writes = (num_functional_writes + (testAndWrite(param_addr, (*tbe).m_DataBlk, param_pkt)));
    }
    num_functional_writes = (num_functional_writes + (functionalMemoryWrite(param_pkt)));
    return num_functional_writes;

}
void
Directory_Controller::setAccessPermission(const Addr& param_addr, const Directory_State& param_state)
{
    if ((((*m_directory_ptr)).isPresent(param_addr))) {
        ((*((getDirectoryEntry(param_addr)))).changePermission((Directory_State_to_permission(param_state))));
    }

}
bool
Directory_Controller::isGETRequest(const CoherenceRequestType& param_type)
{
return (((param_type == CoherenceRequestType_GETS) || (param_type == CoherenceRequestType_GET_INSTR)) || (param_type == CoherenceRequestType_GETX));

}
int
Directory_Controller::functionalWriteBuffers(PacketPtr& pkt)
{
    int num_functional_writes = 0;
num_functional_writes += m_requestToDir_ptr->functionalWrite(pkt);
num_functional_writes += m_responseToDir_ptr->functionalWrite(pkt);
num_functional_writes += m_responseFromDir_ptr->functionalWrite(pkt);
num_functional_writes += m_requestToMemory_ptr->functionalWrite(pkt);
num_functional_writes += m_responseFromMemory_ptr->functionalWrite(pkt);
    return num_functional_writes;
}
bool
Directory_Controller::functionalReadBuffers(PacketPtr& pkt)
{
if (m_requestToDir_ptr->functionalRead(pkt)) return true;
if (m_responseToDir_ptr->functionalRead(pkt)) return true;
if (m_responseFromDir_ptr->functionalRead(pkt)) return true;
if (m_requestToMemory_ptr->functionalRead(pkt)) return true;
if (m_responseFromMemory_ptr->functionalRead(pkt)) return true;
    return false;
}

bool
Directory_Controller::functionalReadBuffers(PacketPtr& pkt, WriteMask &mask)
{
    bool read = false;
if (m_requestToDir_ptr->functionalRead(pkt, mask)) read = true;
if (m_responseToDir_ptr->functionalRead(pkt, mask)) read = true;
if (m_responseFromDir_ptr->functionalRead(pkt, mask)) read = true;
if (m_requestToMemory_ptr->functionalRead(pkt, mask)) read = true;
if (m_responseFromMemory_ptr->functionalRead(pkt, mask)) read = true;
    return read;
}

} // namespace MESI_Two_Level
} // namespace ruby
} // namespace gem5
