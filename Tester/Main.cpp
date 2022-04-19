#include "Foo.h";
#include <iostream>

int main()
{
	Foo f;
	std::cout << f.add(1, 2) << std::endl;
	std::cout << f.add2(1, 2) << std::endl;

	std::cout << "Hello from Tester!";
	return 0;

}