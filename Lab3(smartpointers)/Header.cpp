#include <iostream>
#include "Header.h"
using std::cout;

Foo::Foo() //this is the constactor
{
	cout << "Calls Constructor\n";
}

Foo::~Foo() //this is the destactor
{
	cout << "Calls Destructor\n";
}

Foo::Foo(const Foo& x) // this is the copy constructor
{
	cout << "Calls copy Constructor\n";
}

Foo::Foo(int x) :_x(x) // this is the other constructor
{
	cout << "other Constructor\n";
}

int Foo::getx()
{
	return _x;
}