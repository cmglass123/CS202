#include<iostream>
using std::cout;

void lowerCase(char *x)
{
	for (int i = 0; x[i] != '0'; i++)
	{
		if (x[i] <= 90 && x[i] >= 65)
		{
			x[i] += 32;
		}
	}
}

int main()
{
	char word[] = "HELLO WORLD!";
	lowerCase(word);
	cout << word;
}