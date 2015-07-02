//生产女人工厂
#pragma once
#include"AbstractFactory.h"
#include"YellowWoman.h"
#include"WhiteWoman.h"
class womanfactory: public AbFactory{
public:
	womanfactory()
	{
		cout<<"女人工厂构造"<<endl;
	}
	virtual ~womanfactory()
	{
		cout<<"女人工厂析构"<<endl;
	}
	virtual human* creatyellowhuman();
	virtual human* creatwhitehuman();
};
human* womanfactory::creatyellowhuman()
{
	return new yellowwoman();
}
human* womanfactory::creatwhitehuman()
{
	return new whitewoman();
}
