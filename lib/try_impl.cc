/* -*- c++ -*- */
/*
 * Copyright 2023 gr-try2 author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "try_impl.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace try2 {

#pragma message("set the following appropriately and remove this warning")
using input_type = float;
try::sptr try::make() { return gnuradio::make_block_sptr<try_impl>(); }


/*
 * The private constructor
 */
try_impl::try_impl()
    : gr::sync_block("try",
                     gr::io_signature::make(
                         1 /* min inputs */, 1 /* max inputs */, sizeof(input_type)),
                     gr::io_signature::make(0, 0, 0))
{
}

/*
 * Our virtual destructor.
 */
try_impl::~try_impl() {}

int try_impl::work(int noutput_items,
                   gr_vector_const_void_star& input_items,
                   gr_vector_void_star& output_items)
{
    auto in = static_cast<const input_type*>(input_items[0]);

#pragma message("Implement the signal processing in your block and remove this warning")
    // Do <+signal processing+>

    // Tell runtime system how many output items we produced.
    return noutput_items;
}

} /* namespace try2 */
} /* namespace gr */
