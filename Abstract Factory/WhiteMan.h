//�����Ʒ1:��������
#pragma once
#include"WhiteHuman.h"
class whiteman: public whitehuman{
public:
	whiteman()
	{
		cout<<"�������˹���"<<endl;
	}
	virtual ~whiteman()
	{
		cout<<"������������"<<endl;
	}
	virtual void sex();
};
void whiteman::sex()
{
	cout<<"��������"<<endl;
}