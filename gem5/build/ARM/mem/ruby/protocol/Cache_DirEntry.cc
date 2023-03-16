/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:501
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/Cache_DirEntry.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
Cache_DirEntry::print(std::ostream& out) const
{
    out << "[Cache_DirEntry: ";
    out << "sharers = " << m_sharers << " ";
    out << "owner = " << m_owner << " ";
    out << "ownerExists = " << m_ownerExists << " ";
    out << "ownerIsExcl = " << m_ownerIsExcl << " ";
    out << "state = " << m_state << " ";
    out << "]";
}
} // namespace ruby
} // namespace gem5