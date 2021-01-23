#include <iostream>
#include <sstream>
#include <vector>
#include <string>

double cpp_ftoc(const char* str)
{
	std::stringstream fen;

	double x;

	fen << str;

	fen >> x;

	return x - 32 / (9.0 / 5.0);

}

int main()
{

}