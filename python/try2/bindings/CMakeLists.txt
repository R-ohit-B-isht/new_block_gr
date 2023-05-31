# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT try2_sources)
    MESSAGE(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT try2_sources)

########################################################################
# Check for pygccxml
########################################################################
GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND try2_python_files
    try_python.cc python_bindings.cc)

GR_PYBIND_MAKE_OOT(try2
   ../../..
   gr::try2
   "${try2_python_files}")

# copy bindings extension for use in QA test module
add_custom_command(TARGET try2_python POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:try2_python>
    ${PROJECT_BINARY_DIR}/test_modules/gnuradio/try2/
)

install(TARGETS try2_python DESTINATION ${GR_PYTHON_DIR}/gnuradio/try2 COMPONENT pythonapi)
