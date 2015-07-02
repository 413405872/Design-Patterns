/*
观察者模式（Observer）：对象行为型模式；

举个例子：
	红绿灯：那么交通灯就属于驾驶员的观察目标；而驾驶员就相当于观察者；

	很明显一个“观察目标”可以有很多歌“观察者”。
	当“观察目标”发生变化时，那么它就会“通知”所有“观察者”状态发生变化，这样观察者就可以做出相应的动作。
	发生改变的对象称为“观察目标”，而被通知的对象称为“观察者”；

	观察目标Subject：它提供一系列方法来增加（attach）和删除（detach）“观察者对象”，同时它定义了“通知方法notify()”。
	观察者Observer：观察者将对观察目标的改变做出反应，观察者一般定义为接口，该接口声明了更新数据的方法update()

*/

#include"Observer.h"
#include"Subject.h"
int main()
{
	Subject* sub = new ConcreteSubject();//创建一个被观察目标
    Observer* o1 = new ConcreteObserverA(sub);//执行这量句相当于把o1,o2添加到观察目标的队列中去
    Observer* o2 = new ConcreteObserverB(sub);
    sub->SetState("old");//这个是改被观察目标的状态
    sub->Notify();//这样就要通知其他所有观察者了
    sub->SetState("new"); //也可以由 Observer 调用
    sub->Notify();
	delete o2;
	delete o1;
	delete sub;
    return 0;
}