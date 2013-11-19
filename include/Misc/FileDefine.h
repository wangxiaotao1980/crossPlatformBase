/*******************************************************************************
 *  @file      FileDefine.h 2013\6\5 16:14:06 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(���ı������)
 *  �����ļ�����
 ******************************************************************************/

#ifndef FILEDEFINE_5095E114_3A36_4642_A85A_E99AD20CF90E_H__
#define FILEDEFINE_5095E114_3A36_4642_A85A_E99AD20CF90E_H__

#include "MiscConfig.h"

#include <sys/types.h>
#include <sys/stat.h>

#if defined(CPS_COMILER_GCC_CPP)
    #include <unistd.h>
#endif

#include <stdio.h>
#include <string>

#include <string>

/******************************************************************************/

CPS_MISC_NAMESPACE_BEGIN

#if defined(CPS_COMILER_MSVC_CPP)
    #define stat_    _stati64    
    #define fseek_   _fseeki64
#else
// ��ʱ��������Ҫ��ϸ���һЩ����
    #define stat64_     stat
    #define fseek64_    fseek
#endif
// 
// #if defined(CPS_COMILER_GCC_CPP)
//     
//     #if defined(CPS_OS_APPLE) && defined(__amd64__)
//         #define stat64_ stat 
//     #else
//         #define stat64_ stat64 
//     #endif
// 
// #define fseek64_ fseeko
// 
// #endif


CPS_MISC_API_DECL FILE* fopen_(const std::string& filename, const std::string& mode);

CPS_MISC_API_DECL int   stat64_(const std::string& filename,  struct stat_* buf);
CPS_MISC_NAMESPACE_END
/******************************************************************************/
#endif// FILEDEFINE_5095E114_3A36_4642_A85A_E99AD20CF90E_H__
