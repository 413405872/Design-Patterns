//�������˹���
#pragma once
#include"AbstractFactory.h"
#include"YellowMan.h"
#include"WhiteMan.h"
class manfactory: public AbFactory{
public:
	manfactory()
	{
		cout<<"���˹�������"<<endl;
	}
	virtual ~manfactory()
	{
		cout<<"���˹�������"<<endl;
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
