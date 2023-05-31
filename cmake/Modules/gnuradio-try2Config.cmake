find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_TRY2 gnuradio-try2)

FIND_PATH(
    GR_TRY2_INCLUDE_DIRS
    NAMES gnuradio/try2/api.h
    HINTS $ENV{TRY2_DIR}/include
        ${PC_TRY2_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_TRY2_LIBRARIES
    NAMES gnuradio-try2
    HINTS $ENV{TRY2_DIR}/lib
        ${PC_TRY2_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-try2Target.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_TRY2 DEFAULT_MSG GR_TRY2_LIBRARIES GR_TRY2_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_TRY2_LIBRARIES GR_TRY2_INCLUDE_DIRS)
