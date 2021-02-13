#include<iostream>
using std::cout;

void lowerCase(char *x)
{
	for (int i = 0; x[i] != '0'; i++)
	{
		if (x[i] <= 'Z' && x[i] >= 'A')
		{
			x[i] += ('a'-'A');
		}
	}
}

int main()
{
	char word[] = "HELLO WORLD!0";
	lowerCase(word);
	cout << word;
} 