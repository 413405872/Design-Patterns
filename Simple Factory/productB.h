#pragma once 
#include"product.h"
class productB: public product{
public:
	productB();
	virtual ~productB();
	virtual bool makecall(const string & number) const;
};
productB::productB()
{
	cout<<"生产B产品！"<<endl;
}
productB::~productB()
{
	cout<<"B产品析构"<<endl;
}
bool productB::makecall(const string & number) const
{
	cout<<"产品B编号是："<<number.c_str()<<endl;
	return false;
}