//�ܳ����Ʒ��
#pragma once
#include<iostream>
using namespace std;
class human{
public:
	human()
	{
		cout<<"���๹��"<<endl;
	}
	virtual ~human()
	{
		cout<<"��������"<<endl;
	}
	//����ǲ�Ʒ������
	virtual void laugh() const =0;
	virtual void cry() const=0;
	virtual void sex()=0;
};