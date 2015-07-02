//观察目标类和其具体实现类
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
	virtual void Attach(Observer* ob);//增加“观察者”
	virtual void Detach(Observer* ob);//删除“观察者”
	virtual void Notify();//通知观察者
	virtual void SetState(const state& st)=0;//设定状态，红灯变绿灯等等。
	virtual state GetState()=0;//获取状态
private:
	list<Observer*> *Obvs;//用一个链表存储观察者对象。
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