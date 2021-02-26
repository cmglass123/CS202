#pragma once
#ifndef TOKEN_HPP
#define TOKEN_HPP
#include <iostream>
#include <string>
using std::string;


struct TokenAndPosition
{
	string _token;
	int _line;
	unsigned int _column;
};

#endif // !TOKEN_HPP
