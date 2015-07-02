//具体产品类：白种人
#pragma once
#include"Human.h"
class whitehuman: public human{
public:
	whitehuman(){
		cout<<"白human构造"<<endl;
	}
	virtual~whitehuman(){
		cout<<"白human析构"<<endl;
	}
	virtual void laugh() const;
	virtual void cry() const;
	virtual void talk() const;
};
void whitehuman::laugh() const
{
	cout<<"白种人笑很夸张"<<endl;
}
void whitehuman::cry() const
{
	cout<<"白种人哭很伤心"<<endl;
}
void whitehuman::talk() const
{
	cout<<"白种人谈吐很得当"<<endl;
}