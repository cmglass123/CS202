#pragma once
#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <iostream>
#include <ostream>
#include <numeric>

template<typename T>
class Rational
{
	template<typename U>
	friend std::ostream& operator<<(std::ostream& os, const Rational<U> &rhs);

	template<typename U>
	friend Rational <U> operator-(const Rational<U> &lhs);

	template<typename U>
	friend Rational <U> operator+(const Rational<U> &lhs, const Rational<U> &rhs);

	template<typename U>
	friend bool operator<(const Rational<U> &lhs, const Rational<U> &rhs);

	template<typename U>
	friend bool operator==(const Rational<U> &lhs, const Rational<U> &rhs);

public:
	T _num, _den;

	void reduce();

	Rational();
	Rational(T num);
	Rational(T num, T den);
	Rational<T> operator+=(const Rational<T> &rhs);
	Rational<T> operator-=(const Rational<T> &rhs);
	Rational<T> operator*=(const Rational<T> &rhs);
	Rational<T> operator/=(const Rational<T> &rhs);

};

template<typename U>
Rational <U> operator-(const Rational<U>& lhs, const Rational<U>& rhs);

template<typename U>
Rational <U> operator*(Rational<U> lhs, const Rational<U>& rhs);

template<typename U>
Rational <U> operator/(Rational<U> lhs, const Rational<U>& rhs);

template<typename U>
bool operator>(const Rational<U>& lhs, const Rational<U>& rhs);

template<typename U>
bool operator<=(const Rational<U>& lhs, const Rational<U>& rhs);

template<typename U>
bool operator>=(const Rational<U>& lhs, const Rational<U>& rhs);

template<typename U>
bool operator!=(const Rational<U>& lhs, const Rational<U>& rhs);

#endif // !RATIONAL_HPP

template<typename T>
void Rational<T>::reduce()
{
	auto gcd = std::gcd(_num, _den);
	_num /= gcd;
	_den /= gcd;
	if (_den < 0) {
		_num *= -1;
		_den *= -1;
	}
}

template<typename T>
Rational<T>::Rational() : _num(0), _den(0)
{}

template<typename T>
Rational<T>::Rational(T num) : _num(num), _den(1)
{}

template<typename T>
inline Rational<T>::Rational(T num, T den): _num(num), _den(den)
{}

template<typename T>
Rational<T> Rational<T>::operator+=(const Rational<T> &rhs)
{
	_num = _num * rhs._den + rhs._num * _den;
	_den *= rhs._den;
	reduce();
	return *this;
}

template<typename T>
Rational<T> Rational<T>::operator-=(const Rational<T> &rhs)
{
	*this = *this - rhs;
	return *this;
}

template<typename T>
Rational<T> Rational<T>::operator*=(const Rational<T> &rhs)
{
	_num *= rhs._num;
	_den *= rhs._den;
	return *this;
}

template<typename T>
Rational<T> Rational<T>::operator/=(const Rational<T> &rhs)
{
	return *this *= {rhs._den, rhs._num};
}

template<typename U>
std::ostream& operator<<(std::ostream& os, const Rational<U> &rhs)
{
	os << rhs._num;
	if (rhs._den != 0)
	{
		os << "/" << rhs._den;
		return os;
	}
}

template<typename U>
inline Rational<U> operator-(const Rational<U>& lhs)
{
	return { -lhs._num, lhs._den };
}

template<class U>
Rational <U> operator+(const Rational<U>& lhs, const Rational<U>& rhs)
{
	auto temp{ lhs };
	temp += rhs;
	return temp;
}


template<typename U>
bool operator<(const Rational<U>& lhs, const Rational<U>& rhs)
{
	return lhs._num * rhs._den < rhs._num* lhs._den;
}

template<typename U>
bool operator>(const Rational<U>& lhs, const Rational<U>& rhs)
{
	return rhs < lhs;
}

template<typename U>
bool operator<=(const Rational<U>& lhs, const Rational<U>& rhs)
{
	return !(rhs > lhs);
}

template<typename U>
bool operator>=(const Rational<U>& lhs, const Rational<U>& rhs)
{
	return !(rhs < lhs);
}

template<typename U>
bool operator!=(const Rational<U>& lhs, const Rational<U>& rhs)
{
	return !(rhs == lhs);
}

template<typename U>
bool operator==(const Rational<U>& lhs, const Rational<U>& rhs)
{
	return lhs._num == rhs._num && lhs._den == rhs._den;
}

template<typename U>
Rational<U> operator-(const Rational<U>& lhs, const Rational<U>& rhs)
{
	return lhs + -rhs;
}

template<typename U>
Rational<U> operator*(Rational<U> lhs, const Rational<U>& rhs)
{
	return lhs *= rhs;
}

template<typename U>
Rational<U> operator/(Rational<U> lhs, const Rational<U>& rhs)
{
	return lhs /= rhs;
}


