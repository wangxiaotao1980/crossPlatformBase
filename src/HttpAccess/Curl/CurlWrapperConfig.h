/*******************************************************************************
 *  @file      CurlWrapperConfig.h 2013\5\3 3:41:39 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(���ı������)
 
 ******************************************************************************/

#ifndef CURLWRAPPERCONFIG_C8E8C47E_7518_4620_9681_8FCD85C7623A_H__
#define CURLWRAPPERCONFIG_C8E8C47E_7518_4620_9681_8FCD85C7623A_H__

#include "Config/Config.h"
/******************************************************************************/


// ��ָ���趨������C++11 �� C++98 ��֧��
#if defined(CPS_NO_CXX11_NULLPTR)
    #define CPS_HTTPACCESS_NULL_PTR  0
#else
    #define CPS_HTTPACCESS_NULL_PTR  nullptr
#endif

//http(s)��ʱĬ��ֵ���޳�ʱ����

#define HTTP_NO_TIMEOUT 0U

//http(s)û���ٶ����� 

#define HTTP_NO_SPEED_LIMITED 0U  


/******************************************************************************/
#endif// CURLWRAPPERCONFIG_C8E8C47E_7518_4620_9681_8FCD85C7623A_H__
