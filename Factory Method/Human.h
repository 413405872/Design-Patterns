//抽象产品类
#pragma once
#include<iostream>
using namespace std;
class human{
public:
	human(){
		cout<<"human构造"<<endl;
	}
	virtual~human(){
		cout<<"human析构"<<endl;
	}
	//下面这些是人的基本特征，这个只是为了体现“多态”的特征
	virtual void laugh() const=0;
	virtual void cry() const=0;
	virtual void talk() const=0;
};