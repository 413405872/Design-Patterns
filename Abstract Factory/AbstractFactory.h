//���󹤳�
#pragma once
#include"Human.h"
class AbFactory{
public:
	AbFactory()
	{
		cout<<"���󹤳�����"<<endl;
	}
	virtual ~AbFactory()
	{
		cout<<"���󹤳�����"<<endl;
	}
	virtual human* creatyellowhuman() =0;//��ͱ���һ��������Ʒ�ȼ�
	virtual human* creatwhitehuman() =0;
};
