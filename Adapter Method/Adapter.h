#pragma once
#include<iostream>
using namespace std;
//目标抽象类：定义客户需要的接口，可以是一个抽象类，可以是接口，也可以是具体实现，这个是客户的需求，可能是3.3V可能是5V。
class target{
public:
	target();
	virtual ~target();
	virtual void request();
};
//适配者：被适配的角色，定义了一个已经存在的接口，这个接口需要适配，具体类。它是一个具体实现的过程，被封装起来
class adaptee{
public:
	adaptee();
	~adaptee();
	void specificrequest();
};

//适配器：适配器就是调用适配者已经存在的接口，然后它的父类（目标抽象类）可以调用它的实现接口。
class adapter: public target{
public:
	adapter(adaptee* ade);
	~adapter();
	void request();
private:
	adaptee *Ade;//关联一个适配者对象
};