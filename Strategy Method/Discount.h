//����ļ��������Գ����࣬�;�������ࡣDiscount�ǲ��Գ�����
#pragma once
#include<iostream>
using namespace std;
//���Գ����࣬�������۵�
class Discount{
public:
	Discount()
	{
		cout<<"Discount()"<<endl;
	}
	virtual ~Discount()
	{
		cout<<"~Discount()"<<endl;
	}
	virtual double calculate(double price)=0;
};
//���������1
class StudentDiscount:public Discount{
public:
	StudentDiscount()
	{
		cout<<"StudentDiscount()"<<endl;
	}
	virtual ~StudentDiscount()
	{
		cout<<"~StudentDiscount()"<<endl;
	}
	double calculate(double price)
	{
		cout<<"ѧ��Ʊ8��"<<endl;
		return price*0.8;
	}
};
//���������2
class ChildrenDiscount:public Discount{
public:
	ChildrenDiscount()
	{
		cout<<"ChildrenDiscount()"<<endl;
	}
	virtual ~ChildrenDiscount()
	{
		cout<<"~ChildrenDiscount()"<<endl;
	}
	double calculate(double price)
	{
		if(price>20)
		{
			cout<<"��ͯƱ��10Ԫ"<<endl;
			return price-10;
		}
		else
			return price;
	}
};
//���������3
class VIPDiscount:public Discount{
public:
	VIPDiscount()
	{
		cout<<"VIPDiscount()"<<endl;
	}
	virtual ~VIPDiscount()
	{
		cout<<"~VIPDiscount()"<<endl;
	}
	double calculate(double price)
	{
		cout<<"VIP��Ա����"<<endl;
		return price*0.5;
	}
};
