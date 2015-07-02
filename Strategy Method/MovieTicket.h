//环境类
#include"Discount.h"
class MovieTicket{
public:
	MovieTicket(Discount* dis, double price)//这个很关键，因为你电影票的价格是根据折扣来定的
	{
		cout<<"MovieTicket()"<<endl;
		Dis=dis;
		Price=price;
	}
	~MovieTicket()
	{
		cout<<"~MovieTicket()"<<endl;
		if(Dis!=NULL)//这个是对抽象类里面的进行自行释放
			delete Dis;
	}
	double GetPrice()
	{
		cout<<"GetPrice()"<<endl;
		return Dis->calculate(Price);// //调用折扣类的折扣价计算方法（多态执行）
	}
private:
	Discount *Dis;//这里得有一个打折的对象。根据这个指针进行多态选择。
	double Price;
};