#include "Emperor.h"
#include <iostream>
CEmperor* CEmperor::m_pEmperor = NULL;
HANDLE CEmperor::m_pMutex = CreateMutex(NULL, FALSE, NULL);
//ִ��������һ�䣬��ôCEmperor���е���ͻ�ִ�С�
CEmperor::CGarbo CEmperor::m_Garbo;//��һ��CEmperor��CGarbo��������CGarbo�����ͣ��ڶ���CEmperor�ǵ���,������������������ͻ��Զ�ִ��CGarbo����������
CEmperor::CEmperor(void)
{
    cout << "Create CEmperor Instance" << endl;
}

CEmperor::~CEmperor(void)
{
    cout << "Destroy CEmperor Instance and release its resource" << endl;
}

void CEmperor::EmperorInfo(void)
{
    char msgBuffer[50] = { 0 };
    sprintf_s(msgBuffer, 50, "������.......(%s).", m_EmperorTag.c_str());//c_str()������Ǵ�string����ת��Ϊchar*��
    string msg(msgBuffer);
    cout<<msg.c_str()<< endl;
}

CEmperor* CEmperor::GetInstance()
{
    //�����ȡʵ�����ĺ����������õ�˫�ؼ�����𣡣�����
	if (NULL == m_pEmperor)
    {
        WaitForSingleObject(m_pMutex, INFINITE);
        if (NULL == m_pEmperor)//���һ��Ҫ�ã���Ϊ�������ABͬʱ�ڵ�һ��if���棬��ʱA�����ˣ�B��WaitForSingleObject��ô����AReleaseMutex��B���ᴴ��һ��������ж�һ��NULL�Ͳ��ᴴ���ˡ�
            m_pEmperor = new CEmperor();
        ReleaseMutex(m_pMutex);
    }
    return m_pEmperor;
}

//������������ͻ��ǿ��������ģ���Ϊ�����ҿ��������ͷ�
void CEmperor::ReleaseInstance()
{
    if (NULL!=m_pEmperor)
    {
        WaitForSingleObject(m_pMutex, INFINITE);
        if (NULL!=m_pEmperor)
        {
            delete m_pEmperor;
            m_pEmperor=NULL;
        }
        ReleaseMutex(m_pMutex);
    }
	if (NULL!=m_pMutex)
	{
		cout << "Delete mutex" << endl;
		CloseHandle(m_pMutex);
		m_pMutex = NULL;
	}
}
void CEmperor::SetEmperorTag(string tag)
{
    m_EmperorTag = tag;
}