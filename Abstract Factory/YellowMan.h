//�����Ʒ1:��������
#pragma once
#include"YellowHuman.h"
class yellowman: public yellowhuman{
public:
	yellowman()
	{
		cout<<"�������˹���"<<endl;
	}
	virtual ~yellowman()
	{
		cout<<"������������"<<endl;
	}
	virtual void sex();
};
void yellowman::sex()
{
	cout<<"��������"<<endl;
}