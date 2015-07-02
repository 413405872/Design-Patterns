//抽象产品族1:黄种人
#pragma once
#include"Human.h"
class yellowhuman: public human{
public:
	yellowhuman()
	{
		cout<<"黄种人构造"<<endl;
	}
	virtual ~yellowhuman()
	{
		cout<<"黄种人析构"<<endl;
	}
	void laugh() const//黄种人共性
	{
		cout<<"黄种人笑得很开心"<<endl;
	}
	void cry() const//黄种人共性
	{
		cout<<"黄种人哭得很伤心"<<endl;
	}
	virtual void sex()=0;//这个是不一样的,有两种
};