/*
外观模式(Facade)（门面模式）：是一种对象结构型模式；
符合“迪米特法则”，但是当你增加新的子系统的时候可能会违背“开闭原则”；

外观类：包含很多子系统对象，统一来处理所有的子系统；

举个例子：
		你在中国办个要拿很多证的事情，那太麻烦了；
此时你会找个“代理”（那就是外观类），它可以帮你把A证，B证，C证一起办了；
而这里的“A，B，C”就相当于三个子系统。
*/

#include"Facade.h"
void main()
{
	facade *fa=new facade();
	fa->operationwrapper();
	delete fa;
}