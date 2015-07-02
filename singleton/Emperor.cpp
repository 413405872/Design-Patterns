#include "Emperor.h"
#include <iostream>
CEmperor* CEmperor::m_pEmperor = NULL;
HANDLE CEmperor::m_pMutex = CreateMutex(NULL, FALSE, NULL);
//执行下面这一句，那么CEmperor类中的类就会执行。
CEmperor::CGarbo CEmperor::m_Garbo;//第一个CEmperor是CGarbo的作用域，CGarbo是类型，第二个CEmperor是调用,这样等整个程序结束就会自动执行CGarbo的析构函数
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
    sprintf_s(msgBuffer, 50, "啦啦啦.......(%s).", m_EmperorTag.c_str());//c_str()好像就是从string类型转换为char*吧
    string msg(msgBuffer);
    cout<<msg.c_str()<< endl;
}

CEmperor* CEmperor::GetInstance()
{
    //这个获取实例化的函数不就是用的双重检查所吗！！！！
	if (NULL == m_pEmperor)
    {
        WaitForSingleObject(m_pMutex, INFINITE);
        if (NULL == m_pEmperor)//这个一定要用，因为，如果我AB同时在第一个if下面，此时A下来了，B在WaitForSingleObject那么等你AReleaseMutex后B还会创建一个，如果判断一下NULL就不会创建了。
            m_pEmperor = new CEmperor();
        ReleaseMutex(m_pMutex);
    }
    return m_pEmperor;
}

//下面这个函数客户是可以忘掉的，因为忘掉我可以自行释放
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