#pragma once
#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <iostream>

template<typename T>
class Rational
{
	template<typename U>
	friend std::ostream& operator<<(std::ostream& os, Rational& rhs);
	template<typename U>
	friend Rational operator+(Rational<T> lhs, Rational<T> rhs);
	template<typename U>
	friend Rational operator-(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend Rational operator*(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend Rational operator/(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator<(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator>(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator<=(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator>=(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator!=(Rational<U> lhs, Rational<U> rhs);
	template<typename U>
	friend bool operator==(Rational<U> lhs, Rational<U> rhs);

public:
	T _num, _den;

	Rational();
	Rational(int, int = 1);
	Rational<T> operator+=(const Rational<T> rhs);
	Rational<T> operator-=(const Rational<T> rhs);
	Rational<T> operator*=(const Rational<T> rhs);
	Rational<T> operator/=(const Rational<T> rhs);

};

#endif // !RATIONAL_HPP

template<typename U>
std::ostream& operator<<(std::ostream& os, Rational<U> &rhs)
{
	os << rhs._num;
	if (rhs._den != 0)
	{
		os << "/" << rhs._den;
		return os;
	}
}

template<class U>
Rational <U> operator+(Rational<U> lhs, Rational<U> rhs)
{
	auto temp{ lhs };
	temp += rhs;
	return temp;
}

template<typename U>
Rational<U> operator-(Rational<U> lhs, Rational<U> rhs)
{
	return { -lhs._numerator, lhs._denominator };
}
