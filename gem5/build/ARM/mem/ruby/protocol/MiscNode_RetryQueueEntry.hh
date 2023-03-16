/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:443
 */

#ifndef __MiscNode_RetryQueueEntry_HH__
#define __MiscNode_RetryQueueEntry_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"

#include "mem/ruby/protocol/MachineID.hh"
namespace gem5
{

namespace ruby
{

class MiscNode_RetryQueueEntry
{
  public:
    MiscNode_RetryQueueEntry
()
		{
        // m_txnId has no default
        // m_retryDest has no default
        m_isNonSync = false;
         // default value of bool
    }
    MiscNode_RetryQueueEntry(const MiscNode_RetryQueueEntry&) = default;
    MiscNode_RetryQueueEntry
    &operator=(const MiscNode_RetryQueueEntry&) = default;
    MiscNode_RetryQueueEntry(const Addr& local_txnId, const MachineID& local_retryDest, const bool& local_isNonSync)
    {
        m_txnId = local_txnId;
        m_retryDest = local_retryDest;
        m_isNonSync = local_isNonSync;
    }
    MiscNode_RetryQueueEntry*
    clone() const
    {
         return new MiscNode_RetryQueueEntry(*this);
    }
    // Const accessors methods for each field
    /** \brief Const accessor method for txnId field.
     *  \return txnId field
     */
    const Addr&
    gettxnId() const
    {
        return m_txnId;
    }
    /** \brief Const accessor method for retryDest field.
     *  \return retryDest field
     */
    const MachineID&
    getretryDest() const
    {
        return m_retryDest;
    }
    /** \brief Const accessor method for isNonSync field.
     *  \return isNonSync field
     */
    const bool&
    getisNonSync() const
    {
        return m_isNonSync;
    }
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for txnId field.
     *  \return txnId field
     */
    Addr&
    gettxnId()
    {
        return m_txnId;
    }
    /** \brief Non-const accessor method for retryDest field.
     *  \return retryDest field
     */
    MachineID&
    getretryDest()
    {
        return m_retryDest;
    }
    /** \brief Non-const accessor method for isNonSync field.
     *  \return isNonSync field
     */
    bool&
    getisNonSync()
    {
        return m_isNonSync;
    }
    // Mutator methods for each field
    /** \brief Mutator method for txnId field */
    void
    settxnId(const Addr& local_txnId)
    {
        m_txnId = local_txnId;
    }
    /** \brief Mutator method for retryDest field */
    void
    setretryDest(const MachineID& local_retryDest)
    {
        m_retryDest = local_retryDest;
    }
    /** \brief Mutator method for isNonSync field */
    void
    setisNonSync(const bool& local_isNonSync)
    {
        m_isNonSync = local_isNonSync;
    }
    void print(std::ostream& out) const;
  //private:
    /** Transaction ID */
    Addr m_txnId;
    /** Retry destination */
    MachineID m_retryDest;
    /** Is a NonSync operation */
    bool m_isNonSync;
};
inline ::std::ostream&
operator<<(::std::ostream& out, const MiscNode_RetryQueueEntry& obj)
{
    obj.print(out);
    out << ::std::flush;
    return out;
}

} // namespace ruby
} // namespace gem5

#endif // __MiscNode_RetryQueueEntry_HH__
