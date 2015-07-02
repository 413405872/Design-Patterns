//抽象工厂
#pragma once
#include"Human.h"
class AbFactory{
public:
	AbFactory()
	{
		cout<<"抽象工厂构造"<<endl;
	}
	virtual ~AbFactory()
	{
		cout<<"抽象工厂析构"<<endl;
	}
	virtual human* creatyellowhuman() =0;//这就表明一共两个产品等级
	virtual human* creatwhitehuman() =0;
};
