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
	cout<<"����B��Ʒ��"<<endl;
}
productB::~productB()
{
	cout<<"B��Ʒ����"<<endl;
}
bool productB::makecall(const string & number) const
{
	cout<<"��ƷB����ǣ�"<<number.c_str()<<endl;
	return false;
}