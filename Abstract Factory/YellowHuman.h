//�����Ʒ��1:������
#pragma once
#include"Human.h"
class yellowhuman: public human{
public:
	yellowhuman()
	{
		cout<<"�����˹���"<<endl;
	}
	virtual ~yellowhuman()
	{
		cout<<"����������"<<endl;
	}
	void laugh() const//�����˹���
	{
		cout<<"������Ц�úܿ���"<<endl;
	}
	void cry() const//�����˹���
	{
		cout<<"�����˿޵ú�����"<<endl;
	}
	virtual void sex()=0;//����ǲ�һ����,������
};