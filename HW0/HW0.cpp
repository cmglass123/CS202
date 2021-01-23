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

double c_ctof(const char* str)
{
	double x = strtod(str, nullptr);

	return x * (9.0 / 5.0) + 32;
}

int main()
{
	std::vector<std::string> degrees;

	for (int i = 0; i < argc; i++)
	{
		degrees.push_back(argv[i]);
	}

}