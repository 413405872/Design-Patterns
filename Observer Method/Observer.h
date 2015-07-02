//这个是观察者类
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
	virtual Subject* GetSubject();//这个就是获取观察目标的
	ConcreteObserverA(Subject *sub);
	~ConcreteObserverA();
	void Update(Subject* sub);//这里Update就是根据观察目标来更新的
	void PrintInfo();
private:
	Subject *Sub1;//定义观察目标的对象。
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