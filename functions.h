#pragma once
#include <iostream>
#include<algorithm>
#include <cmath>
#include <vector>
template<class InputIt, class T>
constexpr
T accumulate(InputIt first, InputIt last, T init)
{
	for (; first != last; ++first)
		init = std::move(init) + *first;
	return init;
}
template<class Iterator, class UnaryOperation>
void for_each(Iterator first, Iterator last, UnaryOperation up) {
	for (; first != last; ++first)
	{
		up(*first);
	}
}
template<class Itertor, class UnaryOperation, typename T>
T template_with_return(Itertor first, Itertor last, T result, UnaryOperation func) {
	for (; first != last; ++first)
	{
		result = func(first, result);
	}
	return result;
}
int sum_of_digits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
template<typename T>
int count_number_size(T value) {
	int count = 0;
	for (; value != 0; count++) {
		value /= 10;
	}
	return count;
}
template<class T>
T divider_counter(T begin, T end, T value, T count) {
	for (; begin != end; ++begin)
	{
		if (value % begin == 0)
		{
			count++;
		}
	}
	return count;
}
template<class T>
T divider_counter1(T value) {
	int count = 0;
	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			count++;
		}
	}
	return count;
}
int sum_of_divisors(int n) {
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}
bool is_divisible(int n, int count) {
	int temp = n;
	while (temp > 0) {
		int digit = temp % 10;
		if (digit != 0 && n % digit == 0) {
			count++;
		}
		temp /= 10;
	}
	if (count >= count_number_size(n)) {
		return true;
	}
	return false;
}
bool is_increasing(int n) {
	int last_digit = n % 10;
	n /= 10;
	while (n > 0) {
		int digit = n % 10;
		if (digit >= last_digit) {
			return false;
		}
		last_digit = digit;
		n /= 10;
	}
	return true;
}
bool is_not_increasing(int n) {
	int last_digit = n % 10;
	n /= 10;
	while (n > 0) {
		int digit = n % 10;
		if (digit <= last_digit) {
			return false;
		}
		last_digit = digit;
		n /= 10;
	}
	return true;
}
template <class T>
T gcd(T first_value, T second_value);
bool is_coprime(int n, int m) {
	return gcd(n, m) == 1;
}
template<typename T>
bool is_prime(T value) {
	if (value <= 1)
		return false;
	for (int i = 2; i <= std::sqrt(value); i++) {
		if (value % i == 0) return false;
	}
	return true;
}