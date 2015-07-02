/*
单例模式：确保一个类只有一个实例。属于“对象创建型模式”
1、idea：	构造函数私有才会保证正常人不能在外部随便创建对象！！
question：	那么我现在需要一个实例，那这个实例该怎么创建呢？？？
2、idea：	我在类内部将这个对象创建好不就ok了吗！！定义一个静态的CEmperor类型的私有private成员变量！！
question：	为啥我要定义静态的？？？
answer：	因为我在外部不定义这个实例，那么我如何获取到实例呢？？？我可以通过类名直接调用静态成员函数啊，而静态成员方法内部不能直接使用非静态成员变量！！

*/
#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
class CEmperor
{
public:
    static CEmperor * GetInstance();//获取实例的静态成员方法

    static void ReleaseInstance();//像这个是相当于执行析构函数的，但是如果用户忘记了咋办，所以如果能用智能指针最好不过了。也可以使用“对象管理资源”的方法
    
	void EmperorInfo(void);
    
	void SetEmperorTag(string tag);
private:
    CEmperor(void);//构造函数
    virtual ~CEmperor(void);//析构函数
    CEmperor(const CEmperor&);//复制构造函数
    CEmperor& operator=(const CEmperor&);//赋值构造函数

private:
	static CEmperor *m_pEmperor;//实例
    static HANDLE m_pMutex;//这个是个互斥器
    string m_EmperorTag;

	//对象管理资源
    class CGarbo
    {
    public:
        CGarbo()
        {
            cout << "Create Garbo" << endl;
        }
        ~CGarbo()
        {
            cout << "Destroy Garbo" << endl;
			//好，如果你客户忘记释放了，我这边帮你释放。
            if (NULL!=m_pEmperor)
            {
                WaitForSingleObject(m_pMutex, INFINITE);//我要等到我可以访问这个对象啊
                if (NULL != m_pEmperor)
                {
                    cout << "Remove instance" << endl;
                    delete m_pEmperor;
                    m_pEmperor = NULL;
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
    };
    static CGarbo m_Garbo;//这个对象很关键啊，我在类实现里会调用一下。
};