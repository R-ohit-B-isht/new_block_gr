/* -*- c++ -*- */
/*
 * Copyright 2023 gr-try2 author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_TRY2_TRY_H
#define INCLUDED_TRY2_TRY_H

#include <gnuradio/sync_block.h>
#include <gnuradio/try2/api.h>
#include <QWidget>
namespace gr {
namespace try2 {

/*!
 * \brief <+description of block+>
 * \ingroup try2
 *
 */
class TRY2_API
try:
    virtual public gr::sync_block
    {
    public:
        typedef std::shared_ptr<try> sptr;

        /*!
         * \brief Return a shared_ptr to a new instance of try2::try.
         *
         * To avoid accidental use of raw pointers, try2::try's
         * constructor is in a private implementation
         * class. try2::try::make is the public interface for
         * creating new instances.
         */
        static sptr make();
    };

} // namespace try2
} // namespace gr

#endif /* INCLUDED_TRY2_TRY_H */
