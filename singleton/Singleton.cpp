#include "Emperor.h"
void DoIt()
{
    CEmperor *pEmperor1 = CEmperor::GetInstance();//��ȡʵ��
    pEmperor1->SetEmperorTag("95");//���в���
    pEmperor1->EmperorInfo();

    CEmperor *pEmperor2 = CEmperor::GetInstance();//��ȡʵ��
    pEmperor2->EmperorInfo();

    CEmperor *pEmperor3 = CEmperor::GetInstance();//��ȡʵ��
    pEmperor3->EmperorInfo();

    CEmperor *pEmperor4 = pEmperor3;
    pEmperor4->EmperorInfo();

    CEmperor *pEmperor5 = NULL;
    pEmperor5 = pEmperor4;
    pEmperor5->EmperorInfo();

    CEmperor::ReleaseInstance();//����ǿ��п��޵ģ���Ϊ��ͻ������ͷ��ˣ����е��������ͷŵģ����Լ��������ͷ�
}

void main()
{
	DoIt();
}