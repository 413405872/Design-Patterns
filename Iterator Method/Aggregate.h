//抽象聚合类，具体聚合类
#pragma once
#include<iostream>
#include"Iterator.h"
using namespace std;
typedef int object;
class Iterator;
class Aggregate{//抽象聚合类
public:
	Aggregate();
	virtual ~Aggregate();
	virtual Iterator* createiterator()=0;//看到没？？这里会产生一个“迭代器”对象，接下来我们通过这个迭代器对象可以访问聚合类的元素
	virtual int getsize()=0;
	virtual object getitem(int id)=0;
};
class ConcreteAggregate: public Aggregate{//具体聚合类
public:
	enum{SIZE=3};
	ConcreteAggregate();
	~ConcreteAggregate();
	Iterator* createiterator();
	int getsize();
	object getitem(int id);
private:
	object objs[SIZE];
};