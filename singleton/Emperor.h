/*
����ģʽ��ȷ��һ����ֻ��һ��ʵ�������ڡ����󴴽���ģʽ��
1��idea��	���캯��˽�вŻᱣ֤�����˲������ⲿ��㴴�����󣡣�
question��	��ô��������Ҫһ��ʵ���������ʵ������ô�����أ�����
2��idea��	�������ڲ���������󴴽��ò���ok���𣡣�����һ����̬��CEmperor���͵�˽��private��Ա��������
question��	Ϊɶ��Ҫ���徲̬�ģ�����
answer��	��Ϊ�����ⲿ���������ʵ������ô����λ�ȡ��ʵ���أ������ҿ���ͨ������ֱ�ӵ��þ�̬��Ա������������̬��Ա�����ڲ�����ֱ��ʹ�÷Ǿ�̬��Ա��������

*/
#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
class CEmperor
{
public:
    static CEmperor * GetInstance();//��ȡʵ���ľ�̬��Ա����

    static void ReleaseInstance();//��������൱��ִ�����������ģ���������û�������զ�죬���������������ָ����ò����ˡ�Ҳ����ʹ�á����������Դ���ķ���
    
	void EmperorInfo(void);
    
	void SetEmperorTag(string tag);
private:
    CEmperor(void);//���캯��
    virtual ~CEmperor(void);//��������
    CEmperor(const CEmperor&);//���ƹ��캯��
    CEmperor& operator=(const CEmperor&);//��ֵ���캯��

private:
	static CEmperor *m_pEmperor;//ʵ��
    static HANDLE m_pMutex;//����Ǹ�������
    string m_EmperorTag;

	//���������Դ
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
			//�ã������ͻ������ͷ��ˣ�����߰����ͷš�
            if (NULL!=m_pEmperor)
            {
                WaitForSingleObject(m_pMutex, INFINITE);//��Ҫ�ȵ��ҿ��Է����������
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
    static CGarbo m_Garbo;//�������ܹؼ�����������ʵ��������һ�¡�
};