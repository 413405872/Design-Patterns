#pragma once
#include<iostream>
using namespace std;
//Ŀ������ࣺ����ͻ���Ҫ�Ľӿڣ�������һ�������࣬�����ǽӿڣ�Ҳ�����Ǿ���ʵ�֣�����ǿͻ������󣬿�����3.3V������5V��
class target{
public:
	target();
	virtual ~target();
	virtual void request();
};
//�����ߣ�������Ľ�ɫ��������һ���Ѿ����ڵĽӿڣ�����ӿ���Ҫ���䣬�����ࡣ����һ������ʵ�ֵĹ��̣�����װ����
class adaptee{
public:
	adaptee();
	~adaptee();
	void specificrequest();
};

//�����������������ǵ����������Ѿ����ڵĽӿڣ�Ȼ�����ĸ��ࣨĿ������ࣩ���Ե�������ʵ�ֽӿڡ�
class adapter: public target{
public:
	adapter(adaptee* ade);
	~adapter();
	void request();
private:
	adaptee *Ade;//����һ�������߶���
};