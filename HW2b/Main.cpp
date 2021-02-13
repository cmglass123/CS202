#include<iostream>
using std::cout;
using std::endl;

static int static_storage;
auto ptrStatic = &static_storage;

int main()
{
	int theStack;

	auto freeStore = new int[3];

	cout << "this is the stack pointer address: " << &theStack << endl;
	cout << "this is the static pointer address: " << &ptrStatic << endl;

	if (ptrStatic < &theStack)
	{
		std::cout << "static data is in lower memory than the stack.\n";
	}
	else
	{
		std::cout << "static data is in higher memory than the stack.\n";
	}

	cout << endl;

	cout << "this is the free store pointer address: " << &freeStore << endl;
	cout << "this is the static pointer address: " << &ptrStatic << endl;

	if (ptrStatic < freeStore)
	{
		cout << "static data is in lower memory than the free store.\n";
	}
	else
	{
		cout << "static data is in higher memory than the free store.\n";
	}

	cout << endl;

	cout << "this is the free store pointer address: " << &freeStore << endl;
	cout << "this is the stack address: " << &theStack << endl;

	if (&theStack < freeStore)
	{
		cout << "stack is in lower memory than the free store.\n";
	}
	else
	{
		cout << "stack is in higher memory than the free store.\n";
	}


	
}