//�����ƷA
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
	cout<<"����A��Ʒ��"<<endl;
}
productA::~productA()
{
	cout<<"A��Ʒ����"<<endl;
}
bool productA::makecall(const string & number) const
{
	cout<<"��ƷA����ǣ�"<<number.c_str()<<endl;
	return false;
}