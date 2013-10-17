/*******************************************************************************
 *  @file      MiscConfig.h 2013\4\25 14:53:39 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(中文编码测试)
 
 ******************************************************************************/

#ifndef MISCCONFIG_ABE90963_C0DB_4B63_8EA2_8BA096A13299_H__
#define MISCCONFIG_ABE90963_C0DB_4B63_8EA2_8BA096A13299_H__

#include "../Config/Config.h"
/******************************************************************************/

#define  SNDA_MISC_NAMESPACE snda_misc
#if defined(__cplusplus)
    #define  SNDA_MISC_NAMESPACE_BEGIN \
        namespace SNDA_MISC_NAMESPACE\
            {

    #define  SNDA_MISC_NAMESPACE_END \
            }

#endif

#if defined(SNDA_ALL_DYNAMIC_LINK) || defined(SNDA_MISC_DYNAMIC_LINK)
    #if defined(SNDA_ALL_SOURCE) || defined(SNDA_MISC_SOURCE) 
        #define SNDA_MISC_API_DECL SNDA_SYMBOL_EXPORT
    #else
        #define SNDA_MISC_API_DECL SNDA_SYMBOL_IMPORT
    #endif
#else
    #define SNDA_MISC_API_DECL
#endif

/******************************************************************************/
#endif// MISCCONFIG_ABE90963_C0DB_4B63_8EA2_8BA096A13299_H__
