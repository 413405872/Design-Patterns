//����Ů�˹���
#pragma once
#include"AbstractFactory.h"
#include"YellowWoman.h"
#include"WhiteWoman.h"
class womanfactory: public AbFactory{
public:
	womanfactory()
	{
		cout<<"Ů�˹�������"<<endl;
	}
	virtual ~womanfactory()
	{
		cout<<"Ů�˹�������"<<endl;
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
