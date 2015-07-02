/*
工厂方法:对象创建型模式

		抽象产品(Human)					抽象工厂(HumanFactory)(这里通过createhuman产生一个产品的父类对象)
			*									*
			*									*
		**********						   ***********
		*		 *						   *		 *
		*		 *						   *		 *
	具体产品1   具体产品2				具体工厂1  具体工厂2
（Yellowhuman）（Whitehuman）	（YellowhumanFactory）（WhitehumanFactory）



在工厂方法模式中，我们不再提供一个统一的工厂类来创建所有的产品对象，而是针对不同的产品提供不同的工厂，系统提供一个与产品等级结构对应的工厂等级结构。
*/




#include"Blackhumanfactory.h"
#include"Whitehumanfactory.h"
#include"Yellowhumanfactory.h"
void Doyellow()
{
	humanfactory* HF=NULL;//来一个工厂的对象。
	HF=new yellowhumanfactory();//生产黄人的实例，这是多态，用父类的指针指向它，跟它自己一样的，但是我们只知道父类接口
	human* H=HF->creathuman();//这是生产黄种人；
	H->cry();//下面就是黄种人的行为
	H->laugh();
	H->talk();
	delete H;
	delete HF;
	cout<<endl<<endl;
}
void Dowhite()
{
	humanfactory* HF=NULL;
	HF=new whitehumanfactory();//生产白人的实例，这是多态，用父类的指针指向它，跟它自己一样的，但是我们只知道父类接口
	human* H=HF->creathuman();//这是生产白种人；
	H->cry();//下面就是白种人的行为
	H->laugh();
	H->talk();
	delete H;
	delete HF;
}
void main()
{
	cout<<"工厂方法---------"<<endl;
	Doyellow();
	Dowhite();
}