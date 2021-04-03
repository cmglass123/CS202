#include "box.hpp"

Box::Box()
{
}

Box::Box(int width, int height): _width(width), _height(height)
{
}

Box::~Box()
{
}

string Box::type()
{
	return _type;
}


void Box::setWidth(int width)
{
	width = _width;
}

int Box::getWidth()
{
	return _width;
}

void Box::setHeight(int height)
{
	height = _height;
}

int Box::getHeight()
{
	return _height;
}

void Box::print(ostream& os) const 
{
	os << "this is a box";
}

ostream& operator<<(ostream& os, const Box& b)
{
	b.print(os);
	return os;
}
