/*
简单工厂，根据产品型号选择生产产品，这里都聚集在一个工厂里！
当你添加新产品的时候你就要改变你工厂的代码，这不符合“开闭原则”，工厂方法会搞定！！！
*/

#pragma once //保证编译一次
#include"productA.h"
#include"productB.h"
class factory{
public:
	factory(){
		cout<<"工厂构造"<<endl;
	}
	~factory(){
		cout<<"工厂析构"<<endl;
	}
	//发现没有工厂生产返回的对象是“父类产品指针”，这样可以采用多态的思想来根据客户你要生产谁我生产谁
	static product *creatproduct(const string& Product);//设计为静态方法，这样我们就可以不用实例化它，那样还浪费资源，这样直接通过工厂调用就行了。
};
product *factory::creatproduct(const string& Product)
{
	product *pp=NULL;
	if(Product=="A")
	{
		pp=new productA();
	}
	else if(Product=="B")
	{
		pp=new productB();
	}
	else
	{
		cout<<"没有此产品！"<<endl;
	}
	return pp;
}