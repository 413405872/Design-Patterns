//�����Ʒ1:����Ů��
#pragma once
#include"YellowHuman.h"
class yellowwoman: public yellowhuman{
public:
	yellowwoman()
	{
		cout<<"����Ů�˹���"<<endl;
	}
	virtual ~yellowwoman()
	{
		cout<<"����Ů������"<<endl;
	}
	virtual void sex();
};
void yellowwoman::sex()
{
	cout<<"����Ů��"<<endl;
}