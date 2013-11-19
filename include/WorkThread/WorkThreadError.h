/*******************************************************************************
 *  @file      WorkThreadError.h 2013\6\19 14:30:15 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(���ı������)
 
 ******************************************************************************/

#ifndef WORKTHREADERROR_BD24A8B6_7F47_465C_BFAD_1CB03B95F1F9_H__
#define WORKTHREADERROR_BD24A8B6_7F47_465C_BFAD_1CB03B95F1F9_H__

#include "WorkThreadConfig.h"
/******************************************************************************/
CPS_WORK_THREAD_NAMESPACE_BEGIN

    typedef UInt32 WorkThreadCode;

    const WorkThreadCode  THREAD_OK = 0x0U;

    const WorkThreadCode  THREAD_HAS_STARTED = 0x1U; ///< �߳��Ѿ���ʼ
    const WorkThreadCode  THREAD_HAS_ENDED   = 0x2U; ///< �߳��Ѿ�����

CPS_WORK_THREAD_NAMESPACE_END
/******************************************************************************/
#endif// WORKTHREADERROR_BD24A8B6-7F47-465C-BFAD-1CB03B95F1F9_H__
