//�����Ʒ�ࣺ������
#pragma once
#include"Human.h"
class whitehuman: public human{
public:
	whitehuman(){
		cout<<"��human����"<<endl;
	}
	virtual~whitehuman(){
		cout<<"��human����"<<endl;
	}
	virtual void laugh() const;
	virtual void cry() const;
	virtual void talk() const;
};
void whitehuman::laugh() const
{
	cout<<"������Ц�ܿ���"<<endl;
}
void whitehuman::cry() const
{
	cout<<"�����˿޺�����"<<endl;
}
void whitehuman::talk() const
{
	cout<<"������̸�ºܵõ�"<<endl;
}