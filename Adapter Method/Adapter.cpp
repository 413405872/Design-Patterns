#pragma once
#include"Adapter.h"
target::target()
{
	cout<<"target::target()"<<endl;
}
target::~target()
{
	cout<<"target::~target()"<<endl;
}
void target::request()
{
	cout<<"target::request()"<<endl;
}


adaptee::adaptee()
{
	cout<<"adaptee::adaptee()"<<endl;
}
adaptee::~adaptee()
{
	cout<<"adaptee::~adaptee()"<<endl;
}
void adaptee::specificrequest()
{
	cout<<"adaptee::specificrequest()"<<endl;
}



adapter::adapter(adaptee* ade)
{
	Ade=ade;
	cout<<"adapter::adapter()"<<endl;
}
adapter::~adapter()
{
	cout<<"adapter::~adapter()"<<endl;
}
void adapter::request()
{
	Ade->specificrequest();
	cout<<"adapter::request()"<<endl;
}
