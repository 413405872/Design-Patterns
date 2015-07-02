#include"Iterator.h"
#include"Aggregate.h"
Iterator::Iterator()
{
	cout<<"Iterator::Iterator()"<<endl;
}
Iterator::~Iterator()
{
	cout<<"Iterator::~Iterator()"<<endl;
}

ConcreteIterator::ConcreteIterator(Aggregate *ag,int Id)//通过这个我得到了聚合对象
{
	cout<<"ConcreteIterator::ConcreteIterator()"<<endl;
	this->ag=ag;
	this->id=Id;
}
ConcreteIterator::~ConcreteIterator()
{
	cout<<"ConcreteIterator::~ConcreteIterator()"<<endl;
}
void ConcreteIterator::first()
{
	id=0;
}
void ConcreteIterator::next()
{
	if(id<ag->getsize())
		id=id+1;
}
bool ConcreteIterator::isdone()
{
	return (id==ag->getsize());
}
object ConcreteIterator::currentitem()
{
	return ag->getitem(id);
}