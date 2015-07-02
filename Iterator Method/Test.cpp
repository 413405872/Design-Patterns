//迭代器模式

/*
迭代器模式(Iterator)：对象行为型模式；这种模式提供一种方法来访问“聚合对象”；
“聚合对象”：两个职责a“存储数据”，b“遍历数据”；
此时“迭代器模式”就是将“遍历数据”的功能从“聚合对象”中分离出来，封装在一个“迭代器”的对象中。简化聚合对象，符合“单一职责原则”；

而“迭代器模式”应用了“工厂方法”模式。

		抽象聚合类（包含一个迭代器对象Iterator）：会有具体聚合类继承之；
		
		抽象迭代器：会有一个具体迭代器类继承之（并包含一个聚合对象Aggregate）；
*/
#include"Aggregate.h"
#include"Iterator.h"
void main()
{
	Aggregate* AG=new ConcreteAggregate();//大的聚合类
	Iterator* IT=AG->createiterator();//创建一个迭代器
	for(IT->first();!(IT->isdone());IT->next())//first就是下标0开始，isdone就是看有没有超过下界，next就是下标加1
	{
		cout<<IT->currentitem()<<" ";
	}
	cout<<endl;
	delete IT;
	delete AG;
}