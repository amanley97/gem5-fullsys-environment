/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:643
 */

#ifndef __PrefetchBit_HH__
#define __PrefetchBit_HH__

#include <iostream>
#include <string>

namespace gem5
{

namespace ruby
{


// Class definition
/** \enum PrefetchBit
 *  \brief ...
 */
enum PrefetchBit {
    PrefetchBit_FIRST,
    PrefetchBit_No = PrefetchBit_FIRST, /**< No, not a prefetch */
    PrefetchBit_Yes, /**< Yes, a prefetch */
    PrefetchBit_L1_HW, /**< This is a L1 hardware prefetch */
    PrefetchBit_L2_HW, /**< This is a L2 hardware prefetch */
    PrefetchBit_NUM
};

// Code to convert from a string to the enumeration
PrefetchBit string_to_PrefetchBit(const ::std::string& str);

// Code to convert state to a string
::std::string PrefetchBit_to_string(const PrefetchBit& obj);

// Code to increment an enumeration type
PrefetchBit &operator++(PrefetchBit &e);

::std::ostream&
operator<<(::std::ostream& out, const PrefetchBit& obj);

} // namespace ruby
} // namespace gem5
#endif // __PrefetchBit_HH__
