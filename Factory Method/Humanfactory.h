//���󹤳���
#pragma once
#include"Human.h"
class humanfactory{
public:
	humanfactory(){
		cout<<"humanfactory����"<<endl;
	}
	virtual~humanfactory(){
		cout<<"humanfactory����"<<endl;
	}
	virtual human* creathuman()=0;//���麯�����ھ��幤����ʵ��
};