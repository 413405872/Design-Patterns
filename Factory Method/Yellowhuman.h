//�����Ʒ�ࣺ������
#pragma once
#include"Human.h"
class yellowhuman: public human{
public:
	yellowhuman(){
		cout<<"��human����"<<endl;
	}
	virtual~yellowhuman(){
		cout<<"��human����"<<endl;
	}
	virtual void laugh() const;
	virtual void cry() const;
	virtual void talk() const;
};
void yellowhuman::laugh() const
{
	cout<<"������Ц������"<<endl;
}
void yellowhuman::cry() const
{
	cout<<"�����˿޺�����"<<endl;
}
void yellowhuman::talk() const
{
	cout<<"������̸�ºܵõ�"<<endl;
}