/*
Christopher Glass
CS202x
HW2c
*/

#include<iostream>
using std::cout;

void lowerCase(char *x)
{
	for (int i = 0; x[i] != 0; i++)
	{
		if (x[i] <= 'Z' && x[i] >= 'A')
		{
			x[i] += ('a'-'A');
		}
	}
}

int main()
{
	char word[] = "HELLO WORLD!";
	lowerCase(word);
	cout << word;
} 