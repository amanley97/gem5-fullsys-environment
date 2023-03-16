/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:443
 */

#ifndef __MemoryMsg_HH__
#define __MemoryMsg_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"

#include "mem/ruby/protocol/MemoryRequestType.hh"
#include "mem/ruby/protocol/MachineID.hh"
#include "mem/ruby/protocol/MachineID.hh"
#include "mem/ruby/protocol/DataBlock.hh"
#include "mem/ruby/protocol/MessageSizeType.hh"
#include "mem/ruby/protocol/PrefetchBit.hh"
#include "mem/ruby/protocol/Message.hh"
namespace gem5
{

namespace ruby
{

class MemoryMsg :  public Message
{
  public:
    MemoryMsg
(Tick curTime) : Message(curTime) {
        // m_addr has no default
        m_Type = MemoryRequestType_NUM;
         // default value of MemoryRequestType
        // m_Sender has no default
        // m_OriginalRequestorMachId has no default
        // m_DataBlk has no default
        m_MessageSize = MessageSizeType_NUM;
         // default value of MessageSizeType
        m_Len = 0;
         // default value of int
        m_Prefetch = PrefetchBit_No;
         // default value of PrefetchBit
        m_ReadX = false;
         // default value of bool
        m_Acks = 0;
         // default value of int
    }
    MemoryMsg(const MemoryMsg&) = default;
    MemoryMsg
    &operator=(const MemoryMsg&) = default;
    MemoryMsg(const Tick curTime, const Addr& local_addr, const MemoryRequestType& local_Type, const MachineID& local_Sender, const MachineID& local_OriginalRequestorMachId, const DataBlock& local_DataBlk, const MessageSizeType& local_MessageSize, const int& local_Len, const PrefetchBit& local_Prefetch, const bool& local_ReadX, const int& local_Acks)
        : Message(curTime)
    {
        m_addr = local_addr;
        m_Type = local_Type;
        m_Sender = local_Sender;
        m_OriginalRequestorMachId = local_OriginalRequestorMachId;
        m_DataBlk = local_DataBlk;
        m_MessageSize = local_MessageSize;
        m_Len = local_Len;
        m_Prefetch = local_Prefetch;
        m_ReadX = local_ReadX;
        m_Acks = local_Acks;
    }
    MsgPtr
    clone() const
    {
         return std::shared_ptr<Message>(new MemoryMsg(*this));
    }
    // Const accessors methods for each field
    /** \brief Const accessor method for addr field.
     *  \return addr field
     */
    const Addr&
    getaddr() const
    {
        return m_addr;
    }
    /** \brief Const accessor method for Type field.
     *  \return Type field
     */
    const MemoryRequestType&
    getType() const
    {
        return m_Type;
    }
    /** \brief Const accessor method for Sender field.
     *  \return Sender field
     */
    const MachineID&
    getSender() const
    {
        return m_Sender;
    }
    /** \brief Const accessor method for OriginalRequestorMachId field.
     *  \return OriginalRequestorMachId field
     */
    const MachineID&
    getOriginalRequestorMachId() const
    {
        return m_OriginalRequestorMachId;
    }
    /** \brief Const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    const DataBlock&
    getDataBlk() const
    {
        return m_DataBlk;
    }
    /** \brief Const accessor method for MessageSize field.
     *  \return MessageSize field
     */
    const MessageSizeType&
    getMessageSize() const
    {
        return m_MessageSize;
    }
    /** \brief Const accessor method for Len field.
     *  \return Len field
     */
    const int&
    getLen() const
    {
        return m_Len;
    }
    /** \brief Const accessor method for Prefetch field.
     *  \return Prefetch field
     */
    const PrefetchBit&
    getPrefetch() const
    {
        return m_Prefetch;
    }
    /** \brief Const accessor method for ReadX field.
     *  \return ReadX field
     */
    const bool&
    getReadX() const
    {
        return m_ReadX;
    }
    /** \brief Const accessor method for Acks field.
     *  \return Acks field
     */
    const int&
    getAcks() const
    {
        return m_Acks;
    }
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for addr field.
     *  \return addr field
     */
    Addr&
    getaddr()
    {
        return m_addr;
    }
    /** \brief Non-const accessor method for Type field.
     *  \return Type field
     */
    MemoryRequestType&
    getType()
    {
        return m_Type;
    }
    /** \brief Non-const accessor method for Sender field.
     *  \return Sender field
     */
    MachineID&
    getSender()
    {
        return m_Sender;
    }
    /** \brief Non-const accessor method for OriginalRequestorMachId field.
     *  \return OriginalRequestorMachId field
     */
    MachineID&
    getOriginalRequestorMachId()
    {
        return m_OriginalRequestorMachId;
    }
    /** \brief Non-const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    DataBlock&
    getDataBlk()
    {
        return m_DataBlk;
    }
    /** \brief Non-const accessor method for MessageSize field.
     *  \return MessageSize field
     */
    MessageSizeType&
    getMessageSize()
    {
        return m_MessageSize;
    }
    /** \brief Non-const accessor method for Len field.
     *  \return Len field
     */
    int&
    getLen()
    {
        return m_Len;
    }
    /** \brief Non-const accessor method for Prefetch field.
     *  \return Prefetch field
     */
    PrefetchBit&
    getPrefetch()
    {
        return m_Prefetch;
    }
    /** \brief Non-const accessor method for ReadX field.
     *  \return ReadX field
     */
    bool&
    getReadX()
    {
        return m_ReadX;
    }
    /** \brief Non-const accessor method for Acks field.
     *  \return Acks field
     */
    int&
    getAcks()
    {
        return m_Acks;
    }
    // Mutator methods for each field
    /** \brief Mutator method for addr field */
    void
    setaddr(const Addr& local_addr)
    {
        m_addr = local_addr;
    }
    /** \brief Mutator method for Type field */
    void
    setType(const MemoryRequestType& local_Type)
    {
        m_Type = local_Type;
    }
    /** \brief Mutator method for Sender field */
    void
    setSender(const MachineID& local_Sender)
    {
        m_Sender = local_Sender;
    }
    /** \brief Mutator method for OriginalRequestorMachId field */
    void
    setOriginalRequestorMachId(const MachineID& local_OriginalRequestorMachId)
    {
        m_OriginalRequestorMachId = local_OriginalRequestorMachId;
    }
    /** \brief Mutator method for DataBlk field */
    void
    setDataBlk(const DataBlock& local_DataBlk)
    {
        m_DataBlk = local_DataBlk;
    }
    /** \brief Mutator method for MessageSize field */
    void
    setMessageSize(const MessageSizeType& local_MessageSize)
    {
        m_MessageSize = local_MessageSize;
    }
    /** \brief Mutator method for Len field */
    void
    setLen(const int& local_Len)
    {
        m_Len = local_Len;
    }
    /** \brief Mutator method for Prefetch field */
    void
    setPrefetch(const PrefetchBit& local_Prefetch)
    {
        m_Prefetch = local_Prefetch;
    }
    /** \brief Mutator method for ReadX field */
    void
    setReadX(const bool& local_ReadX)
    {
        m_ReadX = local_ReadX;
    }
    /** \brief Mutator method for Acks field */
    void
    setAcks(const int& local_Acks)
    {
        m_Acks = local_Acks;
    }
    void print(std::ostream& out) const;
  //private:
    /** Physical address for this request */
    Addr m_addr;
    /** Type of memory request (MEMORY_READ or MEMORY_WB) */
    MemoryRequestType m_Type;
    /** What component sent the data */
    MachineID m_Sender;
    /** What component originally requested */
    MachineID m_OriginalRequestorMachId;
    /** Data to writeback */
    DataBlock m_DataBlk;
    /** size category of the message */
    MessageSizeType m_MessageSize;
    /** size of the memory/dma request */
    int m_Len;
    /** Is this a prefetch request */
    PrefetchBit m_Prefetch;
    /** Exclusive */
    bool m_ReadX;
    /** How many acks to expect */
    int m_Acks;
    bool functionalRead(Packet* param_pkt);
    bool functionalRead(Packet* param_pkt, WriteMask& param_mask);
    bool functionalWrite(Packet* param_pkt);
};
inline ::std::ostream&
operator<<(::std::ostream& out, const MemoryMsg& obj)
{
    obj.print(out);
    out << ::std::flush;
    return out;
}

} // namespace ruby
} // namespace gem5

#endif // __MemoryMsg_HH__