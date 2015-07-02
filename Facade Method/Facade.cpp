#pragma once
#include"Facade.h"
subsystem1::subsystem1()
{
	cout<<"subsystem1::subsystem1()"<<endl;
}
subsystem1::~subsystem1()
{
	cout<<"subsystem1::~subsystem1()"<<endl;
}
void subsystem1::operation()
{
	cout<<"subsystem1::operation()"<<endl;
}

subsystem2::subsystem2()
{
	cout<<"subsystem2::subsystem2()"<<endl;
}
subsystem2::~subsystem2()
{
	cout<<"subsystem2::~subsystem2()"<<endl;
}
void subsystem2::operation()
{
	cout<<"subsystem2::operation()"<<endl;
}

facade::facade()
{
	cout<<"facade::facade()"<<endl;
	sys1=new subsystem1();
	sys2=new subsystem2();
}
facade::~facade()
{
	if(sys1!=NULL)
	{
		delete sys1;
		cout<<"sys1析构"<<endl;
	}
	if(sys2!=NULL)
	{
		delete sys2;
		cout<<"sys2析构"<<endl;
	}
}

void facade::operationwrapper()
{
	sys1->operation();//几个子系统一起操作。
	sys2->operation();
}
