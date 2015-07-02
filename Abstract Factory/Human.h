//总抽象产品族
#pragma once
#include<iostream>
using namespace std;
class human{
public:
	human()
	{
		cout<<"人类构造"<<endl;
	}
	virtual ~human()
	{
		cout<<"人类析构"<<endl;
	}
	//这个是产品的特征
	virtual void laugh() const =0;
	virtual void cry() const=0;
	virtual void sex()=0;
};