#include "Foo.h"
#include "Foo2.h"

int Foo::add2(int a, int b)
{
	Foo2 f;
	return (a + b + f.plus_one());
	
}



int Foo::add(int a, int b)
{
	return (a + b);
}