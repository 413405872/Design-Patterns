//具体产品1:黄种女人
#pragma once
#include"YellowHuman.h"
class yellowwoman: public yellowhuman{
public:
	yellowwoman()
	{
		cout<<"黄种女人构造"<<endl;
	}
	virtual ~yellowwoman()
	{
		cout<<"黄种女人析构"<<endl;
	}
	virtual void sex();
};
void yellowwoman::sex()
{
	cout<<"黄种女人"<<endl;
}