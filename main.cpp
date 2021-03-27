#include <iostream>
#include "staticPolyClass.h"

using namespace std;

int main()
{
	staticPolyClass spc;

	spc.demoFunc(15);
	spc.demoFunc();
	spc.demoFunc("This is the string");
	spc.demoFunc(80, "This is a string");

	return 0;
}
