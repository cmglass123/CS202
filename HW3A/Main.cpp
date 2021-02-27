#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
using std::getline;
#include <vector>
using std::vector;
#include "token.h"

vector<string> lineToTokens(const string& line)
{
	string temp;
	vector<string> first;
	int x = 0;
	for (size_t i = 0; i <= line.size(); ++i)
	{
		if (line[i] != ' ')
		{
			temp.push_back(line[i]);
		}
		if (line[i] == ' ' || i == line.size())
		{
			first.push_back(temp);
			temp.clear();
			++x;
		}
	}
	return first;
}

vector<TokenAndPosition> readLines(string filename)
{
	ifstream open(filename);
	vector<string> temp;
	vector<TokenAndPosition> tokens;
	

	int line;
	unsigned int column;

	if (!open)
	{
		cout << "ERROR CAN'T READ FILE!" << endl;
	}

	while (!open.eof())
	{
		string words;
		getline(open, words);
		++line;
		temp = lineToTokens(words);
		for (size_t i = 0; i < temp.size(); i++) 
		{
			tokens.push_back(TokenAndPosition{ temp[i], line, column });
			column = column + temp[i].size() + 2;
		}
		column = 0;
	}
	return tokens;
}
