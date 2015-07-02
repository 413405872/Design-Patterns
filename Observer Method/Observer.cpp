#include"Observer.h"
Observer::Observer()
{
	cout<<"Observer::Observer()"<<endl;
	St='\0';
}
Observer::~Observer()
{
	cout<<"Observer::~Observer()"<<endl;
}

ConcreteObserverA::ConcreteObserverA(Subject *sub)
{
	cout<<"ConcreteObserverA::ConcreteObserverA(Subject *sub)"<<endl;
	Sub1=sub;
	Sub1->Attach(this);//������۲�����Ϊ�۲�Ŀ���һ���۲��߷ŵ�������ȥ��
}
ConcreteObserverA::~ConcreteObserverA()
{
	cout<<"ConcreteObserverA::~ConcreteObserverA()"<<endl;
	if(this!=NULL&&Sub1!=NULL)
		Sub1->Detach(this);
}
Subject* ConcreteObserverA::GetSubject()
{
	cout<<"ConcreteObserverA::GetSubject()"<<endl;
	return Sub1;
}
void ConcreteObserverA::PrintInfo()
{
	cout<<"ConcreteObserverA...."<<Sub1->GetState()<<endl;
}
void ConcreteObserverA::Update(Subject* sub)
{
	cout<<"ConcreteObserverA::Update(Subject* sub)"<<endl;
	St=sub->GetState();//��ȡ�۲�Ŀ���״̬
	PrintInfo();
}


ConcreteObserverB::ConcreteObserverB(Subject *sub)
{
	cout<<"ConcreteObserverB::ConcreteObserverB(Subject *sub)"<<endl;
	Sub=sub;
	Sub->Attach(this);//������۲�����Ϊ�۲�Ŀ���һ���۲��߷ŵ�������ȥ��
}
ConcreteObserverB::~ConcreteObserverB()
{
	cout<<"ConcreteObserverB::~ConcreteObserverB()"<<endl;
	if(this!=NULL&&Sub!=NULL)
		Sub->Detach(this);
	//if(Sub!=NULL)
	//	delete Sub;
}
Subject* ConcreteObserverB::GetSubject()
{
	cout<<"ConcreteObserverB::GetSubject()"<<endl;
	return Sub;
}
void ConcreteObserverB::PrintInfo()
{
	cout<<"ConcreteObserverB...."<<Sub->GetState()<<endl;
}
void ConcreteObserverB::Update(Subject* sub)
{
	cout<<"ConcreteObserverB::Update(Subject* sub)"<<endl;
	St=sub->GetState();
	PrintInfo();
}