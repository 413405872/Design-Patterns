//����ģʽ
/*
����ģʽ��strategy�����ֳ�Ϊ����ģʽ����������Ϊģʽ��

�ٸ����ӣ�
	����Ӱ����ӰƱ��VIPƱ��ѧ��Ʊ������Ʊ���ȵȣ�����ǲ�ͬ�Ĳ���
*/
#include"MovieTicket.h"
int main()
{
	Discount *DS=new StudentDiscount();//֪�������Ǹ�ѧ��,���ȸ���������һ��ʲô�ͻ�����ѧ��
	double OriginalPrice=60.0;//��ӰƱԭ�ۣ�����Ƕ������˵�ԭʼƱ��
	double CurrentPrice;
	MovieTicket *mt=new MovieTicket(DS,OriginalPrice);
	CurrentPrice=mt->GetPrice();//�������һ��Dis->calculate(price);���Dis���Ǵ���ȥ��DS
	cout<<CurrentPrice<<endl;
	delete mt;
	return 0;
}