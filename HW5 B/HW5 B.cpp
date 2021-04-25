#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fib(int n)
{
	if (n<=1)
	{
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int fib_loop(int n)
{
	int fibnum = 0;
	int fibFirst = 0;
	int fibSecound = 1;

	for (auto i = 1; i < n; i++)
	{
		fibnum = fibFirst + fibSecound;
		fibFirst = fibSecound;
		fibSecound = fibnum;
	}
	return fibnum;
}

int main()
{
	cout << fib(20) << endl;
	cout << fib_loop(10);
}

