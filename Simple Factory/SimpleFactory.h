/*
�򵥹��������ݲ�Ʒ�ͺ�ѡ��������Ʒ�����ﶼ�ۼ���һ�������
��������²�Ʒ��ʱ�����Ҫ�ı��㹤���Ĵ��룬�ⲻ���ϡ�����ԭ�򡱣�����������㶨������
*/

#pragma once //��֤����һ��
#include"productA.h"
#include"productB.h"
class factory{
public:
	factory(){
		cout<<"��������"<<endl;
	}
	~factory(){
		cout<<"��������"<<endl;
	}
	//����û�й����������صĶ����ǡ������Ʒָ�롱���������Բ��ö�̬��˼�������ݿͻ���Ҫ����˭������˭
	static product *creatproduct(const string& Product);//���Ϊ��̬�������������ǾͿ��Բ���ʵ���������������˷���Դ������ֱ��ͨ���������þ����ˡ�
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
		cout<<"û�д˲�Ʒ��"<<endl;
	}
	return pp;
}