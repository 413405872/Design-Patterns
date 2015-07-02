//具体产品2:白种女人
#pragma once
#include"WhiteHuman.h"
class whitewoman: public whitehuman{
public:
	whitewoman()
	{
		cout<<"白种女人构造"<<endl;
	}
	virtual ~whitewoman()
	{
		cout<<"白种女人析构"<<endl;
	}
	virtual void sex();
};
void whitewoman::sex()
{
	cout<<"白种女人"<<endl;
}