//策略模式
/*
策略模式（strategy）（又称为政策模式）：对象行为模式；

举个例子：
	看电影，电影票有VIP票，学生票，成人票，等等，这就是不同的策略
*/
#include"MovieTicket.h"
int main()
{
	Discount *DS=new StudentDiscount();//知道现在是个学生,你先告诉我这是一个什么客户，是学生
	double OriginalPrice=60.0;//电影票原价，这个是对所有人的原始票价
	double CurrentPrice;
	MovieTicket *mt=new MovieTicket(DS,OriginalPrice);
	CurrentPrice=mt->GetPrice();//这里会有一个Dis->calculate(price);这个Dis就是传进去的DS
	cout<<CurrentPrice<<endl;
	delete mt;
	return 0;
}