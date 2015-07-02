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

Iterator* ConcreteAggregate::createiterator()//�������һ��������
{
	return new ConcreteIterator(this,0);//���Ұ������ľۺ϶�����ҵ������������Ҳź÷������Ԫ�ذ���ͨ���ۺ϶�����ʾۺ����е�Ԫ�ذ�
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