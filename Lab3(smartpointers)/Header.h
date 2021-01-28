#pragma once
#ifndef HEADER__HPP_
#define HEADER__HPP_

#include <iostream>

class Foo
{
public:
	Foo();
	Foo(int x);
	Foo(const Foo& p1);
	int getx();
	~Foo();

private:
	int _x;
};

#endif // !HEADER__HPP_
