/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:501
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/MiscNode_RetryQueueEntry.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
MiscNode_RetryQueueEntry::print(std::ostream& out) const
{
    out << "[MiscNode_RetryQueueEntry: ";
    out << "txnId = " << printAddress(m_txnId) << " ";
    out << "retryDest = " << m_retryDest << " ";
    out << "isNonSync = " << m_isNonSync << " ";
    out << "]";
}
} // namespace ruby
} // namespace gem5