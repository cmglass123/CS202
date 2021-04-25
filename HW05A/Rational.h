#pragma once
#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <iostream>

template<typename T>
class Rational
{
	template<typename U>
	friend Rational operator+(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend Rational operator-(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend Rational operator*(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend Rational operator/(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator<(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator==(Rational<U> lhs, Rational<U> rhs);

};

#endif // !RATIONAL_HPP
