#include<iostream>
#include<string>
#include"simplefactory.h"
using namespace std;
void main()
{
	product* p=NULL;							//先定义一个产品父类对象
	string modeName="A";						//你要生产的产品型号
	p=factory::creatproduct(modeName);			//生产产品
	p->makecall("123");							//这一句就是父类指针调用虚函数，多态想法。
	delete p;									//这边一定要删除的，因为你creatproduct申请了内存，所以得删除，delete NULL也是没有问题的
	p=NULL;										//这句为了防止“野指针”，同样这里也可以使用“对象管理资源”的方法，在工厂类里定义一个类来管理资源。
}