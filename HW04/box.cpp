#include "box.hpp"

Box::Box() : _width(1), _height(1)
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
	_width = width;
}

int Box::getWidth() const
{
	return _width;
}

void Box::setHeight(int height)
{
	_height = height;
}

int Box::getHeight() const
{
	return _height;
}

void Box::print(ostream& os) const
{
}

ostream& operator<<(ostream& os, const Box& b)
{
	b.print(os);
	return os;
}

FilledBox::FilledBox() : Box()
{
}

FilledBox::FilledBox(int width, int height) : Box(width, height)
{
}

FilledBox::~FilledBox()
{
}

string FilledBox::type() const
{
	return "Filled";
}

void FilledBox::print(ostream& os) const
{
	for(auto i = 0; i < getHeight(); i++)
	{
		for (auto x = 0; x < getWidth(); x++)
		{
			os << "x";
		}
		os << "\n";
	}
}

HollowBox::HollowBox() : Box()
{
}

HollowBox::HollowBox(int width, int height): Box(width, height)
{
}

HollowBox::~HollowBox()
{
}

string HollowBox::type() const
{
	return "Hollow";
}

void HollowBox::print(ostream& os) const
{
	for (auto i = 0; i < getHeight(); i++)
	{
		for (auto x = 0; x < getWidth(); x++)
		{
			if (i == 0 || i == getHeight()-1 || x == 0 || x == getWidth()-1)
			{
				os << "x";
			}
			else
			{
				os << " ";
			}
		}
		os << "\n";
	}
}

CheckeredBox::CheckeredBox(): Box()
{
}

CheckeredBox::CheckeredBox(int width, int height): Box(width, height)
{
}

CheckeredBox::~CheckeredBox()
{
}

string CheckeredBox::type() const
{
	return "Checkered";
}

void CheckeredBox::print(ostream& os) const
{
	for (auto i = 0; i < getHeight(); i++)
	{
		for (auto x = 0; x < getWidth(); x++)
		{
			if ((i + x) % 2 == 0)
			{
				os << "x";
			}
			else
			{
				os << " ";
			}
		}
		os << "\n";
	}
}

std::unique_ptr<Box> boxFactory(char c, int w, int h) 
{
	if (c == 'f')
	{
		return std::make_unique<FilledBox>(w, h);
	}

	if (c == 'h')
	{
		return std::make_unique<HollowBox>(w, h);
	}

	if (c == 'c')
	{
		return std::make_unique<CheckeredBox>(w, h);
	}
}