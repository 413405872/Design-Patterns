//���幤���ࣺ�����
#pragma once
#include"Humanfactory.h"
#include"Yellowhuman.h"
class yellowhumanfactory: public humanfactory{
public:
	yellowhumanfactory(){
		cout<<"��humanfactory����"<<endl;
	}
	virtual~yellowhumanfactory(){
		cout<<"��humanfactory����"<<endl;
	}
	virtual human* creathuman();//ʵ�ֳ��󹤳���ķ���
};
human* yellowhumanfactory::creathuman()
{
	return new yellowhuman();
}