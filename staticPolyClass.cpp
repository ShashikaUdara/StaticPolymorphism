#include "staticPolyClass.h"

void staticPolyClass :: demoFunc(int a)
{
	cout<<"staticPolyClass :: demoFunc(int a)"<<endl;
	cout<<"A: "<< a <<endl;
}

void staticPolyClass :: demoFunc(string b)
{
	cout<<"staticPolyClass :: demoFunc(string b)"<<endl;
	cout<<"B: "<< b <<endl;
}

void staticPolyClass :: demoFunc(int a, string b)
{
	cout<<"staticPolyClass :: demoFunc(int a, string b)"<<endl;
	cout<<"A: "<< a <<endl;
	cout<<"B: "<< b <<endl;
}

void staticPolyClass :: demoFunc()
{
	cout<<"staticPolyClass :: demoFunc()"<<endl;
	cout<<"No parameters"<<endl;
}
