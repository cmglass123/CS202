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
	virtual ~Box();

	virtual string type();

	void setWidth(int);
	int getWidth() const;

	void setHeight(int);
	int getHeight() const;

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
	FilledBox(int, int);
	~FilledBox();
	
	string type() const;

	void print(ostream& os) const;
};

class HollowBox : public Box
{
public:
	HollowBox();
	HollowBox(int, int);
	~HollowBox();

	string type() const;

	void print(ostream& os) const;
};

class CheckeredBox : public Box
{
public:
	CheckeredBox();
	CheckeredBox(int, int);
	~CheckeredBox();

	string type() const;

	void print(ostream& os) const;
};

std::unique_ptr<Box> boxFactory(char c, int w, int h);