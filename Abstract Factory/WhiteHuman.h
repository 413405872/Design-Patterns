//�����Ʒ��2:������
#pragma once
#include"Human.h"
class whitehuman: public human{
public:
	whitehuman()
	{
		cout<<"�����˹���"<<endl;
	}
	virtual ~whitehuman()
	{
		cout<<"����������"<<endl;
	}
	void laugh() const//�����˹���
	{
		cout<<"������Ц�úܿ���"<<endl;
	}
	void cry() const//�����˹���
	{
		cout<<"�����˿޵úܿ���"<<endl;
	}
	virtual void sex()=0;//����ǲ�һ����,������
};