#pragma once
#ifndef MYREADWRITE_HPP
#define MYREADWRITE_HPP

#include <iostream>
#include <fstream>


template<class T>
void myWrite(std::ofstream& writeFile, T& a)
{
	if (writeFile)
	{
		writeFile.write(reinterpret_cast<const char*>(&a), sizeof(a));
	}
}

template<class T>
void myRead(std::ifstream& readFile, T& a)
{
	if (readFile)
	{
		readFile.read(reinterpret_cast<char*>(&a), sizeof(a));
	}
}

#endif // !MYREADWRITE_hpp
