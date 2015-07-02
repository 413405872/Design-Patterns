/*
适配器模式（包装器）：属于对象结构型模式。

目标抽象类（Target）是父类，就是那个你要的电压；
适配器（Adapter）继承自Target，就是那个充电器，他还包含（关联）了一个“适配者”（adaptee）就是你已经有的220V电压，但你不知道怎么实现的；
*/


//对象适配器:适配器实现接口抽象接口，适配器与适配者关联
//对象适配器可以一次适配多个适配者，而且还可以适配适配者的子类。
//而类适配器一次只能适配一个适配者类
//adaptee是适配者，adapter是适配器,target是目标类型
#include"Adapter.h"
void main()
{
	adaptee *aee=new adaptee();//这个适配者就是已有的220V电压的接口specificrequest()
	target *adt=new adapter(aee);//这个就是用的多态的想法和复合的想法。
	adt->request();//这个时候父类的指针利用多态调用request。
	delete adt;
	delete aee;
}