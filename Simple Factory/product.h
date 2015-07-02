//这个是总的产品是一个抽象类
/*
product是简单工厂类所创建的所有对象的父类，封装了各种产品对象的公有方法
*/
#pragma once 
#include<iostream>
#include<string>
using namespace std;
class product{
public:
	product();
	virtual ~product();//虚析构
	virtual bool makecall(const string &number) const=0;//纯虚函数，就是提供一个方法，每个产品不一样，有自己的特点
};
product::product()
{
	cout<<"产品构造"<<endl;
}
product::~product()
{
	cout<<"产品析构"<<endl;
}