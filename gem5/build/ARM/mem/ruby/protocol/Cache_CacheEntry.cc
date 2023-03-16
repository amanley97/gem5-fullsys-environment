/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:501
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/Cache_CacheEntry.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
Cache_CacheEntry::print(std::ostream& out) const
{
    out << "[Cache_CacheEntry: ";
    out << "state = " << m_state << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "HWPrefetched = " << m_HWPrefetched << " ";
    out << "]";
}
} // namespace ruby
} // namespace gem5
