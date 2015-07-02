//����ǹ۲�����
#include"Subject.h"
#include<string>
typedef string state;
class Observer{
public:
	Observer();
	virtual ~Observer();
	virtual void Update(Subject* sub)=0;
	virtual void PrintInfo()=0;
	state St;
};

class ConcreteObserverA:public Observer{
public:
	virtual Subject* GetSubject();//������ǻ�ȡ�۲�Ŀ���
	ConcreteObserverA(Subject *sub);
	~ConcreteObserverA();
	void Update(Subject* sub);//����Update���Ǹ��ݹ۲�Ŀ�������µ�
	void PrintInfo();
private:
	Subject *Sub1;//����۲�Ŀ��Ķ���
};

class ConcreteObserverB:public Observer{
public:
	virtual Subject* GetSubject();
	ConcreteObserverB(Subject *sub);
	~ConcreteObserverB();
	void Update(Subject* sub);
	void PrintInfo();
private:
	Subject *Sub;
};