#include"Subject.h"
#include"Observer.h"
Subject::Subject()
{
	cout<<"Subject::Subject()"<<endl;
	Obvs=new list<Observer*>;
}
Subject::~Subject()
{
	cout<<"Subject::~Subject()"<<endl;
	delete Obvs;
}
void Subject::Attach(Observer *ob)
{
	cout<<"Subject::Attach(Observer *ob)"<<endl;
	Obvs->push_front(ob);
}
void Subject::Detach(Observer *ob)
{
	cout<<"Subject::Detach(Observer *ob)"<<endl;
	if(ob!=NULL)
		Obvs->remove(ob);
}
void Subject::Notify()
{
	cout<<"Subject::Notify()"<<endl;
	list<Observer*>::iterator it;
	it=Obvs->begin();
	for(;it!=Obvs->end();it++)
	{
		(*it)->Update(this);//通过Notify来通知观察者，你看把我观察目标的对象传递给Update了。
	}
}

ConcreteSubject::ConcreteSubject()
{
	cout<<"ConcreteSubject::ConcreteSubject()"<<endl;
	St='\0';
}
ConcreteSubject::~ConcreteSubject()
{
	cout<<"ConcreteSubject::~ConcreteSubject()"<<endl;
}
state ConcreteSubject::GetState()
{
	cout<<"ConcreteSubject::GetState()"<<endl;
	return St;
}
void ConcreteSubject::SetState(const state& st)
{
	cout<<"ConcreteSubject::SetState(const state& st)"<<endl;
	St=st;
}