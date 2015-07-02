//�۲�Ŀ����������ʵ����
#pragma once
#include<iostream>
#include<list>
#include<string>
using namespace std;
class Observer;
typedef string state;
class Subject{
public:
	Subject();
	virtual ~Subject();
	virtual void Attach(Observer* ob);//���ӡ��۲��ߡ�
	virtual void Detach(Observer* ob);//ɾ�����۲��ߡ�
	virtual void Notify();//֪ͨ�۲���
	virtual void SetState(const state& st)=0;//�趨״̬����Ʊ��̵Ƶȵȡ�
	virtual state GetState()=0;//��ȡ״̬
private:
	list<Observer*> *Obvs;//��һ������洢�۲��߶���
};

class ConcreteSubject:public Subject{
public:
	ConcreteSubject();
	~ConcreteSubject();
	state GetState();
	void SetState(const state& st);
private:
	state St;
};