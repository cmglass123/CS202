#include <iostream>
#include "Header.h"
#include <memory>
using std::cout;
using std::cin;
using std::endl;
using std::unique_ptr;
using std::shared_ptr;

int main()
{
	cout << "created raw" << endl;
	Foo* ptrA = new Foo();

	cout << "\ncreated unique" << endl;
	unique_ptr<Foo> uptrB = std::make_unique<Foo>(20);

	cout << "\ntransfer ownership" << endl;
	unique_ptr<Foo> uptrC = std::move(uptrB);

	cout << "\ncalling member" << endl;
	cout << "Num: " << uptrC->getx() << endl;

	cout << "\ncreated shared ptr" << endl;
	shared_ptr<Foo> uptrD = std::make_shared<Foo>(10);

	cout << "\ncreated other shared ptr" << endl;
	shared_ptr<Foo> uptrF = uptrD;
	cout << "Num: " << uptrF->getx() << endl;

}