#pragma once
#include <cmath>
#include <iostream>
////////////2.1
template<class T>
T divider_counter(T begin, T end, T value,T count) {
	for (;begin!=end; ++begin)
	{
		if (value % begin == 0)
		{
			count++;
		}
	}
	return count;
}
template<class T>
T divider_counter(T value) {
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
template<class T>
T gcd(T first_value, T second_value);
bool is_coprime(int n, int m) {
	return gcd(n, m) == 1;
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
template<class T>
T find_sum_of_number_are_powers_5(T begin, T end, T sum,T value,T count,T value1) {//1,5
	for (;begin!=end; ++begin)
	{
		value = pow(value1,count);
		if (begin == value)
		{
			count++;
			sum += begin;
		}
	}
	return sum;
}

template<class T>
T sum_of_vaues_that_divisible_by_value(T begin, T end, T sum,T value) {//2,6,7,8
	for (; begin != end; ++begin)
	{

		if (begin % value == 0 )
			sum += begin;
	}
	return sum;
}
template <class T>
T sum_of_fib_numbers(T begin, T end, T sum, T value, T value1) {//3
	for (; value > begin , value < end;)
	{
		value = value + value1;
		value1 = value - value1;
		if (value>end)
		{
			return sum;
		}
	}
	return sum;
}
template <class T>
T sum_of_perfect_squares(T begin, T end, T sum, T value,T count) {//4
	for (; begin != end; ++begin)
	{
		value = pow(count, 2);
		if (begin == value)
		{
			count++;
			sum += value;
		}
	}
	return sum;
}
template<class T>
T sum_of_vaues_that_divisible_by_two_values(T begin, T end, T sum, T value,T value1) {
	for (; begin != end; ++begin)
	{

		if (begin % value == 0 && begin % value1 == 0)//9,10,11,12
			sum += begin;
	}
	return sum;
}
/////////2.2
template<class T>
T calculation_of_conditional_function_at_points(T begin, T end, T step, T value, T variable,T result) {
	for (; begin != end; begin += step)
	{
		if (variable < 2.8)
		{
			result = (value - 0.39) / (exp(begin) + cos(begin));
		}
		if (variable >= 2.8 && variable < 6)
		{
			result = (value - 0.39) / (begin + 1);
		}
		if (variable >= 6)
		{
			result = exp(begin) + sin(begin);
		}
		std::cout << begin << "    |    " << result << std::endl;
	}
	return 0;
}
////////////////2.3
template<class T>
void get_all_natural_divisors_of_value(T begin, T end, T value) {//1
	for (;begin != end; ++begin)
	{
		if (value % begin == 0)
			std::cout << begin << std::endl;
	}
}
template <class T>
void get_all_natural_divisors_of_two_values(T begin, T end, T value, T value1) {//2
	for (; begin != end; ++begin)
	{
		if (value % begin == 0 && value1 % begin == 0)
			std::cout << begin << std::endl;
	}
}
template <class T>
void get_common_multiples_less_than_product(T begin, T value,T value1) {//3
	for (; begin != value*value1; ++begin)
	{
		if (begin % value == 0 && begin % value1 == 0)
		{
			std::cout << begin << std::endl;
		}
	}
}
template<class T>
T gcd(T first_value, T second_value) {//4 
	while (second_value != 0) {
		T t = second_value;
		second_value = first_value % second_value;
		first_value = t;
	}
	return first_value;
}
template<class T>
T lcm(T first_value, T second_value) {// 5
	return first_value * second_value / gcd(first_value, second_value);
}
template<class T>
T gcd_of_3_values(T value1, T value2, T value3) {// 6
	return gcd(gcd(value1, value2),value3);
}
template<class T>
T sum_of_common_divisors(T begin,T end,T value1, T value2, T sum) {//7
	for (; begin != end; ++begin)
	{
		if (value1 % begin == 0 && value2 % begin == 0)
		{
			sum += begin;
		}
	}
	return sum;
}
template<class T>
T find_maximum_sum_of_divisors(T value1, T value2,T max_num) {//8
	for (;value1!=value2; ++value1)
	{
		if (sum_of_divisors(value1) > sum_of_divisors(value2))
		{
			max_num = value1;
		}
	}
	return max_num;
}
template<class T>
void get_coprimes(T value1, T value2, T count) {// 9
	for (; count < value2; ++count) {
		if (is_coprime(value1, count)) {
			std::cout << count << " ";
		}
	}
}
template<class T>
T greatest_number_of_divisors(T value1, T value2, T max_divisors) {//10
	for (; value1 != value2; ++value1)
	{
		if (divider_counter(value1) > divider_counter(value2))
		{
			max_num = divisors_counter(value1);
		}
	}
	return max_num;
}
/*template<class T>
int max_sum_of_divisors_v2(T value1,T value2,T max_divisors,T count) {///(2.3) 10
	for (;value1>value2; ++value1)
	{
		if (divider_counter(value1,value2, value1, count) < divider_counter(value1, value2, value2, count))
		{
			max_divisors = divider_counter(value1, value2, value2, count);
		}
	}
	return value2;
}*/
/*int max_sum_of_divisors_v2(int value1, int value2, int count) {///(2.3) 10
	for (;value1!=value2; ++value1) {
		if (value2 % value1 == 0) {
			count++;
		}
	}
	return count;
}*/