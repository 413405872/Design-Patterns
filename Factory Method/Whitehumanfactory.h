//���幤���ࣺ�����
#pragma once
#include"Humanfactory.h"
#include"Whitehuman.h"
class whitehumanfactory: public humanfactory{
public:
	whitehumanfactory(){
		cout<<"��humanfactory����"<<endl;
	}
	virtual~whitehumanfactory(){
		cout<<"��humanfactory����"<<endl;
	}
	virtual human* creathuman();//ʵ�ֳ��󹤳���ķ���
};
human* whitehumanfactory::creathuman()
{
	return new whitehuman();
}