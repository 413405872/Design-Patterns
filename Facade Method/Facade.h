#pragma once
#include<iostream>
using namespace std;
//��ϵͳ1
class subsystem1{
public:
	subsystem1();
	~subsystem1();
	void operation();
};
//��ϵͳ2
class subsystem2{
public:
	subsystem2();
	~subsystem2();
	void operation();
};
//�����
class facade{
public:
	facade();
	~facade();
	void operationwrapper();//������ʵ����ϵͳ�Ĺ���
private:
	subsystem1* sys1;//�㿴������а�����������ϵͳ���������
	subsystem2* sys2;
};