//������ܵĲ�Ʒ��һ��������
/*
product�Ǽ򵥹����������������ж���ĸ��࣬��װ�˸��ֲ�Ʒ����Ĺ��з���
*/
#pragma once 
#include<iostream>
#include<string>
using namespace std;
class product{
public:
	product();
	virtual ~product();//������
	virtual bool makecall(const string &number) const=0;//���麯���������ṩһ��������ÿ����Ʒ��һ�������Լ����ص�
};
product::product()
{
	cout<<"��Ʒ����"<<endl;
}
product::~product()
{
	cout<<"��Ʒ����"<<endl;
}