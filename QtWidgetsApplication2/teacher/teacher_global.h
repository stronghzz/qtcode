#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(TEACHER_LIB)
#  define TEACHER_EXPORT Q_DECL_EXPORT
# else
#  define TEACHER_EXPORT Q_DECL_IMPORT
# endif
#else
# define TEACHER_EXPORT
#endif
