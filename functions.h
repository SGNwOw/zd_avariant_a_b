#pragma once
#include <iostream>
#include<algorithm>
#include <cmath>
#include <vector>
template<class Iterator, class T>
T accumulate(Iterator first, Iterator last, T init) {
	for (; first != last; ++first)
	{
		init += *first;
	}
	return init;
}
template<class InputIt, class T>
constexpr
T accumulate1(InputIt first, InputIt last, T init)
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
int reverse(int n) {
	int remainder = 0;
	int reverse = 0;
	while (n != 0) {
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	return reverse;
}
double Fact(int value)
{
	if (value == 0 || value == 1) {
		return 1;
	}
	{
		return value * Fact(value - 1);
	}
}
int Fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fib(n - 1) + Fib(n - 2);
}
template<class T>
bool is_fib(T value, T fib_0, T fib_1, T fib_2, T begin) {
	for (; begin != value; ++begin)
	{
		fib_0 = fib_1;
		fib_1 = fib_2;
		fib_2 = fib_1 + fib_0;
		if (fib_2 == value)
		{
			return true;
		}
	}
	return false;
}
template<class T>
int double_fact(T begin, T value,T product) {
	if (value % 2 == 0)
		begin = 2;
	else
		begin = 1;
	for (; begin <= value; begin += 2)
	{
		product *= begin;
	}
	return product;
}
template<class Iterator, class T>
Iterator find(Iterator first, Iterator last, T value) {
	for (; first != last; ++first)
	{
		if (*first == value)
		{
			return *first;
		}
	}
	return last;
}
template<class Iterator, class UnaryPredecate>
Iterator find_if(Iterator first, Iterator last, UnaryPredecate up) {
	for (; first != last; ++first)
	{
		if (up(first))
		{
			return first;
		}
	}
	return last;
}
template<class Iterator, class Comporator>
Iterator search1(Iterator first, Iterator last, Comporator c) {
	Iterator result = first++;
	for (; first != last; ++first)
	{
		if (c(first, result))
		{
			result = first;
		}
	}
	return result;
}
template<class Iterator,class Comporator>
Iterator search2(Iterator first, Iterator last, Comporator c) {
	Iterator result = first++;
	for (; first != last; ++first)
	{
		if (c(first,result))
		{
			*result = *first;
		}
		std::cout << *result << std::endl;
	}
	return result;
}
template<class Iterator>
Iterator min_1(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return *a < *b; });
}
template<class Iterator>
Iterator max_1(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return *a > *b; });
}
template<class Iterator>
Iterator max_module_1(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return abs(*a) > abs(*b); });
}
template<class Iterator>
Iterator min_module_1(Iterator first, Iterator last) {
	return search1(first, last, [](Iterator a, Iterator b) { return abs(*a) < (*b); });
}
template<class Iterator>
Iterator find_indexes(Iterator first, Iterator last) {
	return search2(first, last, [](Iterator a, Iterator b) {return  a * *a < *b; });
}
/*int main()
{
	int arr[]{ -10,-2,3,4,-5,6,7,8,9,10 };
	int* max_el = max_1(arr, arr + 10);
	int* min_el = min_1(arr, arr + 10);
	//std::cout << accumulate(max_el + 1, min_el, 0);
	int* first_positive = find_if(arr, arr + 10, [](int* a) {return *a > 0; });
	int* min_positive = search1(first_positive, arr + 10, [](int* a, int* b) {
		if (*a < 0)
		{
			return false;
		}
		return *a < *b;
		});
	//std::cout << *min_positive;
	int* first_negative = find_if(arr, arr + 10, [](int* a) {return *a < 0; });
	int* max_negative = search1(first_negative, arr + 10, [](int* a, int* b) {
		if (*a > 0)
		{
			return false;
		}
		return *a > *b;
		});
	//std::cout << *max_negative;
	std::cout << accumulate(max_negative, min_positive, 0);
}*/