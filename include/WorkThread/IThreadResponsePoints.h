/*******************************************************************************
 *  @file      IThreadResponsePoints.h 2013\6\18 18:32:04 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(���ı������)
 
 ******************************************************************************/

#ifndef ITHREADRESPONSEPOINTS_7D9A1FF3_81DD_4F18_9D2C_8FE3CEAC5EDE_H__
#define ITHREADRESPONSEPOINTS_7D9A1FF3_81DD_4F18_9D2C_8FE3CEAC5EDE_H__

#include "WorkThread/WorkThreadConfig.h"
/******************************************************************************/

CPS_WORK_THREAD_NAMESPACE_BEGIN

/**
 * The class <code>IThreadResponsePoints</code>
 * ��ƽ̨�߳̿���ʵ�ֽӿڣ���Ӧ��ʱ��������ͣ
 *
 */
struct CPS_WORK_THREAD_DECL IThreadResponsePoints
{
public:

    /**
     * �趨�߳��Ƿ���ͣ
     *
     * @param   bool isPause    ture������ͣ false������ͣ
     * @return void
     */
    virtual void setThreadCanPause(bool isPause) = 0;

protected:

    /**
     * �߳���ͣ�㣬�߳����е��˵�ʱ�������Ӧ��ͣ����
     *
     * @return  void
     */
    virtual void ThreadPausePoint() = 0;

    /**
     * �߳���ֹ�㣬�߳����е��˵�ʱ�������Ӧ��ֹ����
     *
     * @return  void
     * @exception 
     */
    virtual void ThreadInterruptPoint() = 0;

public:

    virtual ~IThreadResponsePoints() = 0;
};

CPS_WORK_THREAD_NAMESPACE_END
/******************************************************************************/
#endif// ITHREADRESPONSEPOINTS_7D9A1FF3_81DD_4F18_9D2C_8FE3CEAC5EDE_H__
