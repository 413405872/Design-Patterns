#include<iostream>
#include<string>
#include"simplefactory.h"
using namespace std;
void main()
{
	product* p=NULL;							//�ȶ���һ����Ʒ�������
	string modeName="A";						//��Ҫ�����Ĳ�Ʒ�ͺ�
	p=factory::creatproduct(modeName);			//������Ʒ
	p->makecall("123");							//��һ����Ǹ���ָ������麯������̬�뷨��
	delete p;									//���һ��Ҫɾ���ģ���Ϊ��creatproduct�������ڴ棬���Ե�ɾ����delete NULLҲ��û�������
	p=NULL;										//���Ϊ�˷�ֹ��Ұָ�롱��ͬ������Ҳ����ʹ�á����������Դ���ķ������ڹ������ﶨ��һ������������Դ��
}