/*******************************************************************************
 *  @file      Config.h 2012\12\25 14:58:20 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>
 *  此头文件作用是包含操作系、编译器、标准库三个设定分支
 ******************************************************************************/

#ifndef CONFIG_8C58F9C0_3E3E_486A_85C5_D2128358B54F_H__
#define CONFIG_8C58F9C0_3E3E_486A_85C5_D2128358B54F_H__

// 用户自定义设定，现在是个空文件，用于用户自定义的东西放入（暂时为空）
#include "UserConfig.h"

// 切记：以下的头文件顺序不要更改
// 编译器设定
#include "CompilerConfig.h"
// 标准库设定
#include "StdLibConfig.h"
// 操作系统设定
#include "PlatformConfig.h"
// 其它设定,用于何必一些信息，更改一些信息
#include "Suffix.h"

/******************************************************************************/
#endif// CONFIG_8C58F9C0_3E3E_486A_85C5_D2128358B54F_H__
