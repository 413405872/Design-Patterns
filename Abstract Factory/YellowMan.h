//具体产品1:黄种男人
#pragma once
#include"YellowHuman.h"
class yellowman: public yellowhuman{
public:
	yellowman()
	{
		cout<<"黄种男人构造"<<endl;
	}
	virtual ~yellowman()
	{
		cout<<"黄种男人析构"<<endl;
	}
	virtual void sex();
};
void yellowman::sex()
{
	cout<<"黄种男人"<<endl;
}