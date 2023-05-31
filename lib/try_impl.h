/* -*- c++ -*- */
/*
 * Copyright 2023 gr-try2 author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_TRY2_TRY_IMPL_H
#define INCLUDED_TRY2_TRY_IMPL_H

#include <gnuradio/try2/try.h>

namespace gr {
namespace try2 {

class try_impl : public try
{
private:
    // Nothing to declare in this block.

public:
    try_impl();
    ~try_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace try2
} // namespace gr

#endif /* INCLUDED_TRY2_TRY_IMPL_H */
