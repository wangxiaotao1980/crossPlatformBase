/*******************************************************************************
 *  @file      EncodeAndDecode.h 2013\4\25 15:02:42 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(中文编码测试)
 
 ******************************************************************************/

#ifndef ENCODEANDDECODE_519EA654_42E0_4012_B61A_194DB3E60D74_H__
#define ENCODEANDDECODE_519EA654_42E0_4012_B61A_194DB3E60D74_H__

#include "MiscConfig.h"

#include <string>

/******************************************************************************/
SNDA_MISC_NAMESPACE_BEGIN

/**
 * UTF-8 编码转换为URL编码
 *
 * @param  const char * s        原始utf-8编码字符串
 *
 * @return  std::string          ulr编码后的string对象
 *
 */
SNDA_MISC_API_DECL std::string utf8urlEncode(const char* s);


SNDA_MISC_NAMESPACE_END
/******************************************************************************/
#endif// ENCODEANDDECODE_519EA654_42E0_4012_B61A_194DB3E60D74_H__
