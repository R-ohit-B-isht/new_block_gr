/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(try.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(80365f28627348e96e10da263e3c2088)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/try2/try.h>
// pydoc.h is automatically generated in the build directory
#include <try_pydoc.h>

void bind_try(py::module& m)
{

    using try    = gr::try2::try;


    py::class_<try, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<try>>(m, "try", D(try))

        .def(py::init(&try::make),
           D(try,make)
        )
        



        ;




}








