#include "Emperor.h"
void DoIt()
{
    CEmperor *pEmperor1 = CEmperor::GetInstance();//获取实例
    pEmperor1->SetEmperorTag("95");//进行操作
    pEmperor1->EmperorInfo();

    CEmperor *pEmperor2 = CEmperor::GetInstance();//获取实例
    pEmperor2->EmperorInfo();

    CEmperor *pEmperor3 = CEmperor::GetInstance();//获取实例
    pEmperor3->EmperorInfo();

    CEmperor *pEmperor4 = pEmperor3;
    pEmperor4->EmperorInfo();

    CEmperor *pEmperor5 = NULL;
    pEmperor5 = pEmperor4;
    pEmperor5->EmperorInfo();

    CEmperor::ReleaseInstance();//这句是可有可无的，因为你客户忘记释放了，类中的类会帮你释放的，我自己会自行释放
}

void main()
{
	DoIt();
}