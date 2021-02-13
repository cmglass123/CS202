/*
Christopher Glass
CS202x 
HW2a
*/

#include<iostream>
#include<string>
#include"catch.hpp"
#include<list>
using std::string;
using std::list;
using std::cout;
using std::endl;

struct Student
{
	int id;
	string name;
	int age;
	double gpa;
	int classYear;
	int cash;
};

bool operator==(const Student& a, const Student& b) 
{
	return (a.id == b.id) && (a.name == b.name) && (a.age == b.age) && (a.gpa == b.gpa) &&
		(a.classYear == b.classYear) && (a.cash == b.cash);
}

bool operator!=(const Student& a, const Student& b)
{
	return (a.id != b.id) || (a.name != b.name) || (a.age != b.age) || (a.gpa != b.gpa) ||
		(a.classYear != b.classYear) || (a.cash != b.cash);
}

TEST_CASE("Queue: First in First out.")
{
	list<Student> a;
	struct Student x = { 1, "bob", 20, 25.0, 1, 150 };
	struct Student y = { 2, "burger", 21, 26.0, 2, 300 };
	struct Student z = { 3, "cheese", 22, 25.0, 3, 500 };
	a.push_back(x);
	a.push_back(y);
	a.push_back(z);
	REQUIRE(z == a.back());
	a.pop_front();
	REQUIRE(x != a.front());
}

TEST_CASE("Stack: last-in First out.")
{

}

TEST_CASE("Insert and Find")
{

}

TEST_CASE("Print the list out")
{

}