//������
#include"Discount.h"
class MovieTicket{
public:
	MovieTicket(Discount* dis, double price)//����ܹؼ�����Ϊ���ӰƱ�ļ۸��Ǹ����ۿ�������
	{
		cout<<"MovieTicket()"<<endl;
		Dis=dis;
		Price=price;
	}
	~MovieTicket()
	{
		cout<<"~MovieTicket()"<<endl;
		if(Dis!=NULL)//����ǶԳ���������Ľ��������ͷ�
			delete Dis;
	}
	double GetPrice()
	{
		cout<<"GetPrice()"<<endl;
		return Dis->calculate(Price);// //�����ۿ�����ۿۼۼ��㷽������ִ̬�У�
	}
private:
	Discount *Dis;//�������һ�����۵Ķ��󡣸������ָ����ж�̬ѡ��
	double Price;
};