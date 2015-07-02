//生产男人工厂
#pragma once
#include"AbstractFactory.h"
#include"YellowMan.h"
#include"WhiteMan.h"
class manfactory: public AbFactory{
public:
	manfactory()
	{
		cout<<"男人工厂构造"<<endl;
	}
	virtual ~manfactory()
	{
		cout<<"男人工厂析构"<<endl;
	}
	virtual human* creatyellowhuman();
	virtual human* creatwhitehuman();
};
human* manfactory::creatyellowhuman()
{
	return new yellowman;
}
human* manfactory::creatwhitehuman()
{
	return new whiteman;
}
