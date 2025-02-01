/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/leonkuabc/gem5/src/mem/slicc/symbols/StateMachine.py:1629
 */

// Directory: Directory protocol

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <typeinfo>

#include "base/logging.hh"

#include "debug/RubyGenerated.hh"
#include "debug/RubySlicc.hh"
#include "mem/ruby/protocol/MI_example/Directory_Controller.hh"
#include "mem/ruby/protocol/MI_example/Directory_Event.hh"
#include "mem/ruby/protocol/MI_example/Directory_State.hh"

#include "mem/ruby/protocol/MI_example/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"
namespace gem5
{

namespace ruby
{

namespace MI_example
{

void
Directory_Controller::wakeup()
{
    if (getMemReqQueue() && getMemReqQueue()->isReady(clockEdge())) {
        serviceMemoryQueue();
    }

    int counter = 0;
    while (true) {
        unsigned char rejected[3];
        memset(rejected, 0, sizeof(unsigned char)*3);
        // Some cases will put us into an infinite loop without this limit
        assert(counter <= m_transitions_per_cycle);
        if (counter == m_transitions_per_cycle) {
            // Count how often we are fully utilized
            stats.fullyBusyCycles++;

            // Wakeup in another cycle and try again
            scheduleEvent(Cycles(1));
            break;
        }
            // DirectoryInPort dmaRequestQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_dmaRequestToDir_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    [[maybe_unused]] const DMARequestMsg* in_msg_ptr;
                                    in_msg_ptr = dynamic_cast<const DMARequestMsg *>(((*m_dmaRequestToDir_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                Directory_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress));
                                    if ((((*in_msg_ptr)).m_Type == DMARequestType_READ)) {
                                        {

                                            TransitionResult result = doTransition(Directory_Event_DMA_READ, tbe, ((*in_msg_ptr)).m_LineAddress);

                                            if (result == TransitionResult_Valid) {
                                                counter++;
                                                continue; // Check the first port again
                                            } else if (result == TransitionResult_ResourceStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            } else if (result == TransitionResult_ProtocolStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            }

                                        }
                                        ;
                                    } else {
                                            if ((((*in_msg_ptr)).m_Type == DMARequestType_WRITE)) {
                                                {

                                                    TransitionResult result = doTransition(Directory_Event_DMA_WRITE, tbe, ((*in_msg_ptr)).m_LineAddress);

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    } else if (result == TransitionResult_ResourceStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    } else if (result == TransitionResult_ProtocolStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    }

                                                }
                                                ;
                                            } else {
                                                panic("Runtime Error at MI_example-dir.sm:234: %s.\n", ("Invalid message"));
                                                ;
                                            }
                                        }
                                        }
                                    }
                        } catch (const RejectException & e) {
                            rejected[0]++;
                        }
            // DirectoryInPort requestQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_requestToDir_ptr)).isReady((clockEdge())))) {
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
                                Directory_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_addr));
                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETS)) {
                                        {

                                            TransitionResult result = doTransition(Directory_Event_GETS, tbe, ((*in_msg_ptr)).m_addr);

                                            if (result == TransitionResult_Valid) {
                                                counter++;
                                                continue; // Check the first port again
                                            } else if (result == TransitionResult_ResourceStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            } else if (result == TransitionResult_ProtocolStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            }

                                        }
                                        ;
                                    } else {
                                            if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETX)) {
                                                {

                                                    TransitionResult result = doTransition(Directory_Event_GETX, tbe, ((*in_msg_ptr)).m_addr);

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    } else if (result == TransitionResult_ResourceStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    } else if (result == TransitionResult_ProtocolStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    }

                                                }
                                                ;
                                            } else {
                                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_PUTX)) {
                                                            if ((((*(getDirectoryEntry(((*in_msg_ptr)).m_addr))).m_Owner).isElement(((*in_msg_ptr)).m_Requestor))) {
                                                                {

                                                                    TransitionResult result = doTransition(Directory_Event_PUTX, tbe, ((*in_msg_ptr)).m_addr);

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    } else if (result == TransitionResult_ResourceStall) {

                                                                        scheduleEvent(Cycles(1));
                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                                    } else if (result == TransitionResult_ProtocolStall) {

                                                                        scheduleEvent(Cycles(1));
                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                                    }

                                                                }
                                                                ;
                                                            } else {
                                                                {

                                                                    TransitionResult result = doTransition(Directory_Event_PUTX_NotOwner, tbe, ((*in_msg_ptr)).m_addr);

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    } else if (result == TransitionResult_ResourceStall) {

                                                                        scheduleEvent(Cycles(1));
                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                                    } else if (result == TransitionResult_ProtocolStall) {

                                                                        scheduleEvent(Cycles(1));
                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                                    }

                                                                }
                                                                ;
                                                            }
                                                        } else {
                                                            panic("Runtime Error at MI_example-dir.sm:255: %s.\n", ("Invalid message"));
                                                            ;
                                                        }
                                                    }
                                                }
                                                }
                                            }
                        } catch (const RejectException & e) {
                            rejected[1]++;
                        }
            // DirectoryInPort memQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_responseFromMemory_ptr)).isReady((clockEdge())))) {
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
                                Directory_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_addr));
                                    if ((((*in_msg_ptr)).m_Type == MemoryRequestType_MEMORY_READ)) {
                                        {

                                            TransitionResult result = doTransition(Directory_Event_Memory_Data, tbe, ((*in_msg_ptr)).m_addr);

                                            if (result == TransitionResult_Valid) {
                                                counter++;
                                                continue; // Check the first port again
                                            } else if (result == TransitionResult_ResourceStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            } else if (result == TransitionResult_ProtocolStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            }

                                        }
                                        ;
                                    } else {
                                            if ((((*in_msg_ptr)).m_Type == MemoryRequestType_MEMORY_WB)) {
                                                {

                                                    TransitionResult result = doTransition(Directory_Event_Memory_Ack, tbe, ((*in_msg_ptr)).m_addr);

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    } else if (result == TransitionResult_ResourceStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    } else if (result == TransitionResult_ProtocolStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    }

                                                }
                                                ;
                                            } else {
                                                DPRINTF(RubySlicc, "MI_example-dir.sm:272: %s\n", ((*in_msg_ptr)).m_Type);
                                                panic("Runtime Error at MI_example-dir.sm:273: %s.\n", ("Invalid message"));
                                                ;
                                            }
                                        }
                                        }
                                    }
                        } catch (const RejectException & e) {
                            rejected[2]++;
                        }
        // If we got this far, we have nothing left todo or something went
        // wrong
        break;
    }
}

} // namespace MI_example
} // namespace ruby
} // namespace gem5
