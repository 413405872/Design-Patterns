/*
��������:���󴴽���ģʽ

		�����Ʒ(Human)					���󹤳�(HumanFactory)(����ͨ��createhuman����һ����Ʒ�ĸ������)
			*									*
			*									*
		**********						   ***********
		*		 *						   *		 *
		*		 *						   *		 *
	�����Ʒ1   �����Ʒ2				���幤��1  ���幤��2
��Yellowhuman����Whitehuman��	��YellowhumanFactory����WhitehumanFactory��



�ڹ�������ģʽ�У����ǲ����ṩһ��ͳһ�Ĺ��������������еĲ�Ʒ���󣬶�����Բ�ͬ�Ĳ�Ʒ�ṩ��ͬ�Ĺ�����ϵͳ�ṩһ�����Ʒ�ȼ��ṹ��Ӧ�Ĺ����ȼ��ṹ��
*/




#include"Blackhumanfactory.h"
#include"Whitehumanfactory.h"
#include"Yellowhumanfactory.h"
void Doyellow()
{
	humanfactory* HF=NULL;//��һ�������Ķ���
	HF=new yellowhumanfactory();//�������˵�ʵ�������Ƕ�̬���ø����ָ��ָ�����������Լ�һ���ģ���������ֻ֪������ӿ�
	human* H=HF->creathuman();//�������������ˣ�
	H->cry();//������ǻ����˵���Ϊ
	H->laugh();
	H->talk();
	delete H;
	delete HF;
	cout<<endl<<endl;
}
void Dowhite()
{
	humanfactory* HF=NULL;
	HF=new whitehumanfactory();//�������˵�ʵ�������Ƕ�̬���ø����ָ��ָ�����������Լ�һ���ģ���������ֻ֪������ӿ�
	human* H=HF->creathuman();//�������������ˣ�
	H->cry();//������ǰ����˵���Ϊ
	H->laugh();
	H->talk();
	delete H;
	delete HF;
}
void main()
{
	cout<<"��������---------"<<endl;
	Doyellow();
	Dowhite();
}