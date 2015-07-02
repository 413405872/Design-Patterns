//具体工厂类：造白人
#pragma once
#include"Humanfactory.h"
#include"Whitehuman.h"
class whitehumanfactory: public humanfactory{
public:
	whitehumanfactory(){
		cout<<"白humanfactory构造"<<endl;
	}
	virtual~whitehumanfactory(){
		cout<<"白humanfactory析构"<<endl;
	}
	virtual human* creathuman();//实现抽象工厂类的方法
};
human* whitehumanfactory::creathuman()
{
	return new whitehuman();
}