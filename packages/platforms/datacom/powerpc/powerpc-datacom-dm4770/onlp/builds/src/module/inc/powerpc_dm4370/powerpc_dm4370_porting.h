/**************************************************************************//**
 *
 * @file
 * @brief powerpc_dm4370 Porting Macros.
 *
 * @addtogroup powerpc_dm4370-porting
 * @{
 *
 *****************************************************************************/
#ifndef __POWERPC_DM4370_PORTING_H__
#define __POWERPC_DM4370_PORTING_H__


/* <auto.start.portingmacro(ALL).define> */
#if POWERPC_DM4370_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS == 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <memory.h>
#endif

#ifndef POWERPC_DM4370_MEMSET
    #if defined(GLOBAL_MEMSET)
        #define POWERPC_DM4370_MEMSET GLOBAL_MEMSET
    #elif POWERPC_DM4370_CONFIG_PORTING_STDLIB == 1
        #define POWERPC_DM4370_MEMSET memset
    #else
        #error The macro POWERPC_DM4370_MEMSET is required but cannot be defined.
    #endif
#endif

#ifndef POWERPC_DM4370_MEMCPY
    #if defined(GLOBAL_MEMCPY)
        #define POWERPC_DM4370_MEMCPY GLOBAL_MEMCPY
    #elif POWERPC_DM4370_CONFIG_PORTING_STDLIB == 1
        #define POWERPC_DM4370_MEMCPY memcpy
    #else
        #error The macro POWERPC_DM4370_MEMCPY is required but cannot be defined.
    #endif
#endif

#ifndef POWERPC_DM4370_STRNCPY
    #if defined(GLOBAL_STRNCPY)
        #define POWERPC_DM4370_STRNCPY GLOBAL_STRNCPY
    #elif POWERPC_DM4370_CONFIG_PORTING_STDLIB == 1
        #define POWERPC_DM4370_STRNCPY strncpy
    #else
        #error The macro POWERPC_DM4370_STRNCPY is required but cannot be defined.
    #endif
#endif

#ifndef POWERPC_DM4370_VSNPRINTF
    #if defined(GLOBAL_VSNPRINTF)
        #define POWERPC_DM4370_VSNPRINTF GLOBAL_VSNPRINTF
    #elif POWERPC_DM4370_CONFIG_PORTING_STDLIB == 1
        #define POWERPC_DM4370_VSNPRINTF vsnprintf
    #else
        #error The macro POWERPC_DM4370_VSNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef POWERPC_DM4370_SNPRINTF
    #if defined(GLOBAL_SNPRINTF)
        #define POWERPC_DM4370_SNPRINTF GLOBAL_SNPRINTF
    #elif POWERPC_DM4370_CONFIG_PORTING_STDLIB == 1
        #define POWERPC_DM4370_SNPRINTF snprintf
    #else
        #error The macro POWERPC_DM4370_SNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef POWERPC_DM4370_STRLEN
    #if defined(GLOBAL_STRLEN)
        #define POWERPC_DM4370_STRLEN GLOBAL_STRLEN
    #elif POWERPC_DM4370_CONFIG_PORTING_STDLIB == 1
        #define POWERPC_DM4370_STRLEN strlen
    #else
        #error The macro POWERPC_DM4370_STRLEN is required but cannot be defined.
    #endif
#endif

/* <auto.end.portingmacro(ALL).define> */


#endif /* __POWERPC_DM4370_PORTING_H__ */
/* @} */
