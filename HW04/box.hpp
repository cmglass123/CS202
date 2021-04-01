#pragma once
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include <string>
using std::string;
#include <fstream>
using std::ostream;

class Box
{
public:
	Box();

	string type();

	setWidth();
	getWidth();

	setHeight();
	getHeight();

	void print(ostream& os);

	ostream& operator<<(ostream& os, const Box& b);

private:
	int _width;
	int _height;
	string type;
};


#endif // !BOX_HPP
