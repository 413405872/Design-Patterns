//抽象工厂类
#pragma once
#include"Human.h"
class humanfactory{
public:
	humanfactory(){
		cout<<"humanfactory构造"<<endl;
	}
	virtual~humanfactory(){
		cout<<"humanfactory析构"<<endl;
	}
	virtual human* creathuman()=0;//纯虚函数，在具体工厂中实现
};