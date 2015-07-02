//具体工厂类：造黄人
#pragma once
#include"Humanfactory.h"
#include"Yellowhuman.h"
class yellowhumanfactory: public humanfactory{
public:
	yellowhumanfactory(){
		cout<<"黄humanfactory构造"<<endl;
	}
	virtual~yellowhumanfactory(){
		cout<<"黄humanfactory析构"<<endl;
	}
	virtual human* creathuman();//实现抽象工厂类的方法
};
human* yellowhumanfactory::creathuman()
{
	return new yellowhuman();
}