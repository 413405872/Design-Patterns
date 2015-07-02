//这个文件包含策略抽象类，和具体策略类。Discount是策略抽象类
#pragma once
#include<iostream>
using namespace std;
//策略抽象类，用来打折的
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
//具体策略类1
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
		cout<<"学生票8折"<<endl;
		return price*0.8;
	}
};
//具体策略类2
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
			cout<<"儿童票减10元"<<endl;
			return price-10;
		}
		else
			return price;
	}
};
//具体策略类3
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
		cout<<"VIP会员五折"<<endl;
		return price*0.5;
	}
};
