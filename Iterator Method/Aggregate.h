//����ۺ��࣬����ۺ���
#pragma once
#include<iostream>
#include"Iterator.h"
using namespace std;
typedef int object;
class Iterator;
class Aggregate{//����ۺ���
public:
	Aggregate();
	virtual ~Aggregate();
	virtual Iterator* createiterator()=0;//����û������������һ���������������󣬽���������ͨ�����������������Է��ʾۺ����Ԫ��
	virtual int getsize()=0;
	virtual object getitem(int id)=0;
};
class ConcreteAggregate: public Aggregate{//����ۺ���
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