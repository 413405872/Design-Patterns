//具体产品1:白种男人
#pragma once
#include"WhiteHuman.h"
class whiteman: public whitehuman{
public:
	whiteman()
	{
		cout<<"白种男人构造"<<endl;
	}
	virtual ~whiteman()
	{
		cout<<"白种男人析构"<<endl;
	}
	virtual void sex();
};
void whiteman::sex()
{
	cout<<"白种男人"<<endl;
}