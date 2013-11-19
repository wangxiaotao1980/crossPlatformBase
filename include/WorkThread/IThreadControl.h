/*******************************************************************************
 *  @file      IThreadControl.h 2013\6\19 11:24:56 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(���ı������)
 
 ******************************************************************************/

#ifndef ITHREADCONTROL_7A8663B2_2094_4755_A4E1_8CED9C16A24C_H__
#define ITHREADCONTROL_7A8663B2_2094_4755_A4E1_8CED9C16A24C_H__

#include "WorkThreadConfig.h"
#include "WorkThreadError.h"
/******************************************************************************/

CPS_WORK_THREAD_NAMESPACE_BEGIN
/**
 * The struct <code>IThreadControl</code>
 *
 */
struct CPS_WORK_THREAD_DECL IThreadControl
{
public:
    /**
     * ��ʼ�߳�
     *
     * @return  WorkThreadCode
     * @retval  THREAD_OK           ����ɹ���ʼ
     * @retval  THREAD_HAS_STARTED  �����߳��Ѿ���ʼ��
     */
    virtual WorkThreadCode startThread()  = 0;
    /**
     * ��ֹ�߳�
     *
     * @return  WorkThreadCode
     * @retval  THREAD_OK           ����ɹ�����
     * @retval  THREAD_HAS_ENDED    �����߳��Ѿ�������
     */
    virtual WorkThreadCode endThread()    = 0;
    /**
     * ��ͣ�߳�
     *
     * @return  WorkThreadCode      
     * @retval  THREAD_OK           ����ɹ�������ͣ��Ϣ 
     *                              ����߳��Ѿ�����ͣ״̬��û���κ�Ӱ�졣ֱ�ӷ���THREAD_OK
     *                              ��Ҳ����˵���Ǹ���Ϣ�ķ���, ʲôʱ����ͣ���̴߳������е���ͣ����Ӧ��
     * @retval  THREAD_HAS_ENDED    �����߳��Ѿ������˻�����δ��ʼ���޷���ͣ
     */
    virtual WorkThreadCode pauseThread()  = 0;

    /**
     * ������ͣ���е��߳�
     *
     * @return  WorkThreadCode      
     * @retval  THREAD_OK           ����ɹ������ָ�������Ϣ
     *                              ����߳��Ѿ������У�û���κ�Ӱ�졣ֱ�ӷ���THREAD_OK
     * @retval  THREAD_HAS_ENDED    �����߳��Ѿ������˻�����δ��ʼ���޷���ͣ
     */
    virtual WorkThreadCode resumeThread() = 0;

    virtual ~IThreadControl() = 0;
};

CPS_WORK_THREAD_NAMESPACE_END
/******************************************************************************/
#endif// ITHREADCONTROL_7A8663B2_2094_4755_A4E1_8CED9C16A24C_H__
