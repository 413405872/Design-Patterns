//�����Ʒ��
#pragma once
#include<iostream>
using namespace std;
class human{
public:
	human(){
		cout<<"human����"<<endl;
	}
	virtual~human(){
		cout<<"human����"<<endl;
	}
	//������Щ���˵Ļ������������ֻ��Ϊ�����֡���̬��������
	virtual void laugh() const=0;
	virtual void cry() const=0;
	virtual void talk() const=0;
};