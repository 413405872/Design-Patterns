//�����Ʒ2:����Ů��
#pragma once
#include"WhiteHuman.h"
class whitewoman: public whitehuman{
public:
	whitewoman()
	{
		cout<<"����Ů�˹���"<<endl;
	}
	virtual ~whitewoman()
	{
		cout<<"����Ů������"<<endl;
	}
	virtual void sex();
};
void whitewoman::sex()
{
	cout<<"����Ů��"<<endl;
}