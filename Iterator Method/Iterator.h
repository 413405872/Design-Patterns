#pragma once
//抽象迭代器和具体迭代器，相当于抽象产品和具体产品
#include<iostream>
using namespace std;
class Aggregate;
typedef int object;
class Iterator{
public:
	virtual ~Iterator();
	virtual void first()=0;
	virtual void next()=0;
	virtual bool isdone()=0;
	virtual object currentitem()=0;
	Iterator();
};
class ConcreteIterator:public Iterator{
public:
	ConcreteIterator(Aggregate *ag, int Id);
	~ConcreteIterator();
	void first();
	void next();
	bool isdone();
	object currentitem();
private:
	Aggregate* ag;//看到没和聚合类关联
	int id;
};
