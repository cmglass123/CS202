#include<iostream>
using std::cout;
using std::endl;

static int static_storage;
auto ptrStatic = &static_storage;

int main()
{
	int theStack;

	auto freeStore = new int[3];

	
}