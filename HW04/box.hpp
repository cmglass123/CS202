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
	Box(int, int);
	~Box();

	virtual string type();

	void setWidth(int);
	int getWidth();

	void setHeight(int);
	int getHeight();

	virtual void print(ostream& os) const;

	friend ostream& operator<<(ostream& os, const Box& b);

private:
	int _width;
	int _height;
	string _type;
};


#endif // !BOX_HPP


class FilledBox : public Box
{
public:
	FilledBox();

private:

};

class HollowBox : public Box
{
public:
	HollowBox();

private:

};

class CheckeredBox : public Box
{
public:
	CheckeredBox();

private:

};