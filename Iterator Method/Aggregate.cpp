#pragma once
#include"Aggregate.h"
Aggregate::Aggregate()
{
	cout<<"Aggregate::Aggregate()"<<endl;
}
Aggregate::~Aggregate()
{
	cout<<"Aggregate::~Aggregate()"<<endl;
}

ConcreteAggregate::ConcreteAggregate()
{
	cout<<"ConcreteAggregate::ConcreteAggregate()"<<endl;
	for(int i=0;i<SIZE;i++)
		objs[i]=i;
}
ConcreteAggregate::~ConcreteAggregate()
{
	cout<<"ConcreteAggregate::~ConcreteAggregate()"<<endl;
}

Iterator* ConcreteAggregate::createiterator()//这个生产一个迭代器
{
	return new ConcreteIterator(this,0);//并且把你具体的聚合对象给我迭代器，这样我才好访问你的元素啊，通过聚合对象访问聚合类中的元素啊
}

int ConcreteAggregate::getsize()
{
	return SIZE;
}
object ConcreteAggregate::getitem(int id)
{
	if(id>=SIZE)
		return -1;
	else
		return objs[id];
}