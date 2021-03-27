#ifndef STATICPOLYCLASS_H
#define STATICPOLYCLASS_H

#include <iostream>

using namespace std;

class staticPolyClass
{
public:
	staticPolyClass() {}
	~staticPolyClass() {}

	// static polymorphism goes here
	void demoFunc(int a);
	void demoFunc(string b);
	void demoFunc(int a, string b);
	void demoFunc();
};

#endif
