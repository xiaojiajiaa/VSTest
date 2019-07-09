#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(TESTDLL_LIB)
#  define TESTDLL_EXPORT Q_DECL_EXPORT
# else
#  define TESTDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define TESTDLL_EXPORT
#endif
