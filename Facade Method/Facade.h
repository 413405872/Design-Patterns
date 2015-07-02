#pragma once
#include<iostream>
using namespace std;
//子系统1
class subsystem1{
public:
	subsystem1();
	~subsystem1();
	void operation();
};
//子系统2
class subsystem2{
public:
	subsystem2();
	~subsystem2();
	void operation();
};
//外观类
class facade{
public:
	facade();
	~facade();
	void operationwrapper();//用它来实现子系统的功能
private:
	subsystem1* sys1;//你看外观类中包含了两个子系统。打包处理
	subsystem2* sys2;
};