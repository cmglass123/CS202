/*
Christopher Glass
CS202x 
HW2a
*/

#include<iostream>
#include<string>
#include"catch.hpp"
#include<list>
#include<algorithm>
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
	list<Student> b;
	struct Student x = { 1, "bob", 20, 25.0, 1, 150 };
	struct Student y = { 2, "burger", 21, 26.0, 2, 300 };
	struct Student z = { 3, "cheese", 22, 25.0, 3, 500 };
	b.push_back(x);
	b.push_back(y);
	b.push_back(z);
	REQUIRE(z == b.back());
	b.pop_back();
	REQUIRE(z != b.back());
}

TEST_CASE("Insert and Find")
{
	list<Student> c;
	list<Student>::iterator it;
	struct Student x = { 1, "bob", 20, 25.0, 1, 150 };
	struct Student y = { 2, "burger", 21, 26.0, 2, 300 };
	struct Student z = { 3, "cheese", 22, 27.0, 3, 500 };
	struct Student t = { 4, "bob cheese", 23, 28.0, 4, 5500 };
	c.push_back(x);
	c.push_back(y);
	c.push_back(z);
	it = c.begin();
	it++;
	c.insert(it,t);
	REQUIRE(y != t);

}

TEST_CASE("Print the list out")
{
	list<Student> d;
	struct Student x = { 1, "bob", 20, 25.0, 1, 150 };
	struct Student y = { 2, "burger", 21, 26.0, 2, 300 };
	struct Student z = { 3, "cheese", 22, 25.0, 3, 500 };


}