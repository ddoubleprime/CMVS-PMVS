
#ifndef BOOST_MPL_RATIONAL_C_HPP_INCLUDED
#define BOOST_MPL_RATIONAL_C_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date: 2004-09-02 11:41:37 -0400 (Thu, 02 Sep 2004) $
// $Revision: 24874 $

#include <boost/mpl/aux_/config/static_constant.hpp>

namespace boost { namespace mpl {

template<
      typename IntegerType
    , IntegerType N
    , IntegerType D = 1
    >
struct rational_c
{
    BOOST_STATIC_CONSTANT(IntegerType, numerator = N);
    BOOST_STATIC_CONSTANT(IntegerType, denominator = D);
    
    typedef rational_c<IntegerType,N,D> type;
    rational_c() {}
};

}}

#endif // BOOST_MPL_RATIONAL_C_HPP_INCLUDED
