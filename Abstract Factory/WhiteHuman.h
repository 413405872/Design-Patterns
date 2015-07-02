//抽象产品族2:白种人
#pragma once
#include"Human.h"
class whitehuman: public human{
public:
	whitehuman()
	{
		cout<<"白种人构造"<<endl;
	}
	virtual ~whitehuman()
	{
		cout<<"白种人析构"<<endl;
	}
	void laugh() const//白种人共性
	{
		cout<<"白种人笑得很夸张"<<endl;
	}
	void cry() const//白种人共性
	{
		cout<<"白种人哭得很夸张"<<endl;
	}
	virtual void sex()=0;//这个是不一样的,有两种
};