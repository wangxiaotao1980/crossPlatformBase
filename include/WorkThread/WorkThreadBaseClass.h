/*******************************************************************************
 *  @file      WorkThreadBaseClass.h 2013\6\19 11:09:50 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com>(���ı������)
 
 ******************************************************************************/

#ifndef WORKTHREADBASECLASS_A777EC05_5D45_4881_86A6_CFF9EE16FC47_H__
#define WORKTHREADBASECLASS_A777EC05_5D45_4881_86A6_CFF9EE16FC47_H__

#include "IThreadControl.h"
#include "IThreadResponsePoints.h"

#include "boost/thread.hpp"

/******************************************************************************/
CPS_WORK_THREAD_NAMESPACE_BEGIN

/**
 * The class <code>WorkThreadBaseClass</code>
 *
 */
class WorkThreadBaseClass : public IThreadResponsePoints
                          , public IThreadControl
{
public:
    /** @name Constructors and Destructor*/

    //@{
    /**
     * No Parameter Constructor 
     */
    WorkThreadBaseClass();
    /**
     * Destructor
     */
    virtual ~WorkThreadBaseClass();

    virtual void setThreadCanPause( bool isPause );
    virtual void ThreadPausePoint();
    virtual void ThreadInterruptPoint();


    virtual WorkThreadCode startThread();
    virtual WorkThreadCode endThread();
    virtual WorkThreadCode pauseThread();
    virtual WorkThreadCode resumeThread();

    //@}

public:
    /** @name Setter Methods*/
    //@{

    //@}
public:
    /** @name Getter Methods*/
    //@{

    //@}
public:
    /** @name Access Methods*/
    //@{

    //@}  

protected:

    static WorkThreadCode  threadFunction(WorkThreadBaseClass* pThis);

protected:
    virtual WorkThreadCode processWorkThread() = 0;
protected:

    boost::thread*                  m_pMainThread;    ///< ���̵߳�boost����
    bool                            m_isThreadStart;  ///< �ж��߳��Ƿ�ʼ
    // ���������������� �������߳��е���ͣ���ָ�����
    bool                            m_isThreadCanPause;  ///< �߳��Ƿ���ͣ
    // ���������߳����ʹ��
    boost::condition_variable_any   m_condPause;      ///<
    boost::mutex                    m_mutexPause;     ///<
};

CPS_WORK_THREAD_NAMESPACE_END
/******************************************************************************/
#endif// WORKTHREADBASECLASS_A777EC05_5D45_4881_86A6_CFF9EE16FC47_H__
