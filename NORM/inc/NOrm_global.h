#ifndef NORM_GLOBAL_H
#define NORM_GLOBAL_H

#if defined(NORM_LIBRARY)
#  define NORMSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NORMSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NORM_GLOBAL_H
