/*
Christopher Glass
CS202x 
HW2a
*/

#include<iostream>
#include<string>
#include"catch.hpp"
using std::string;
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