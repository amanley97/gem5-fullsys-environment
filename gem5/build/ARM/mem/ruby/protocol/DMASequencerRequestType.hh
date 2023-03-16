/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:643
 */

#ifndef __DMASequencerRequestType_HH__
#define __DMASequencerRequestType_HH__

#include <iostream>
#include <string>

namespace gem5
{

namespace ruby
{


// Class definition
/** \enum DMASequencerRequestType
 *  \brief ...
 */
enum DMASequencerRequestType {
    DMASequencerRequestType_FIRST,
    DMASequencerRequestType_Default = DMASequencerRequestType_FIRST, /**< Replace this with access_types passed to the DMA Ruby object */
    DMASequencerRequestType_NUM
};

// Code to convert from a string to the enumeration
DMASequencerRequestType string_to_DMASequencerRequestType(const ::std::string& str);

// Code to convert state to a string
::std::string DMASequencerRequestType_to_string(const DMASequencerRequestType& obj);

// Code to increment an enumeration type
DMASequencerRequestType &operator++(DMASequencerRequestType &e);

::std::ostream&
operator<<(::std::ostream& out, const DMASequencerRequestType& obj);

} // namespace ruby
} // namespace gem5
#endif // __DMASequencerRequestType_HH__
