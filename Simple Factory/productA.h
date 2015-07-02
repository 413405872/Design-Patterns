//具体产品A
#pragma once 
#include"product.h"
class productA: public product{
public:
	productA();
	virtual ~productA();
	virtual bool makecall(const string & number) const;
};
productA::productA()
{
	cout<<"生产A产品！"<<endl;
}
productA::~productA()
{
	cout<<"A产品析构"<<endl;
}
bool productA::makecall(const string & number) const
{
	cout<<"产品A编号是："<<number.c_str()<<endl;
	return false;
}