//具体产品类：黄种人
#pragma once
#include"Human.h"
class yellowhuman: public human{
public:
	yellowhuman(){
		cout<<"黄human构造"<<endl;
	}
	virtual~yellowhuman(){
		cout<<"黄human析构"<<endl;
	}
	virtual void laugh() const;
	virtual void cry() const;
	virtual void talk() const;
};
void yellowhuman::laugh() const
{
	cout<<"黄种人笑很腼腆"<<endl;
}
void yellowhuman::cry() const
{
	cout<<"黄种人哭很伤心"<<endl;
}
void yellowhuman::talk() const
{
	cout<<"黄种人谈吐很得当"<<endl;
}