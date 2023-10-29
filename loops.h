#pragma once
#include <cmath>
#include <iostream>
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
/*template<class T>
T gcd(T first_value, T second_value);
bool is_coprime(int n, int m) {
	return gcd(n, m) == 1;
}*/
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
////////////2.1
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
/*template<class T>
T greatest_number_of_divisors(T value1, T value2, T max_divisors) {//10
	for (; value1 != value2; ++value1)
	{
		if (divider_counter(value1) > divider_counter(value2))
		{
			max_num = divisors_counter(value1);
		}
	}
	return max_num;
}*/
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
}
int max_sum_of_divisors_v2(int value1, int value2, int count) {///(2.3) 10
	for (;value1!=value2; ++value1) {
		if (value2 % value1 == 0) {
			count++;
		}
	}
	return count;
}*/
template <typename T>
T count_numbers(T start, T end, T value, T count) {///(2.4) 1 
	return template_with_return(start, end, 0, [&count, &value](int begin, int end) {
		if (begin % 10 + (begin / 10) % 10 + begin / 100 == value) {
			count++;
		}
		return count;
		});
}
template <typename T>
void count_ways(T value, T& count, int number_1, int number_2, int number_3, int number_4, int number_5, int number_6) {
	for (int i = 0; i <= value / number_1; i++) {
		for (int j = 0; j <= (value - i * number_1) / number_2; j++) {
			for (int k = 0; k <= (value - i * number_1 - j * number_2) / number_3; k++) {
				for (int l = 0; l <= (value - i * number_1 - j * number_2 - k * number_3) / number_4; l++) {
					for (int m = 0; m <= (value - i * number_1 - j * number_2 - k * number_3 - l * number_4) / number_5; m++) {
						int n = value - i * number_1 - j * number_2 - k * number_3 - l * number_4 - m * number_5;
						if (n >= 0 && n <= 1) {
							count++;
							std::cout << " " << count << ": " << i << "  " << number_1 << "  " << j << "  " << number_2 << "  " << k << "  " << number_3 << "  " << l << "  " << number_4 << "  " << m << "  " << number_5 << "  " << n << "  " << number_6 << " " << std::endl;
						}
					}
				}
			}
		}
	}
}
template<class T>
void test(T begin, T end, T end1) {
	for (; begin != end; ++begin)
	{
		for (T begin1 = 10; begin1 != end1; ++begin1)
		{
			if ((begin * 100 + begin1) % (begin * begin1) == 0)
			{
				std::cout << begin << " " << begin1 << std::endl;
			}
		}
	}
}

template <typename T>
void three_digit_numbers_in_decimal_notations_no_identical_digits(T value_i, T value_j, T value_k) {///(2.4) 5 
	for (; value_i <= 9; value_i++) {
		for (T value_j = 0; value_j <= 9; value_j++) {
			if (value_j != value_i) {
				for (T value_k = 0; value_k <= 9; value_k++) {
					if (value_k != value_i && value_k != value_j) {
						std::cout << value_i << value_j << value_k << std::endl;
					}
				}
			}
		}
	}
}
template<typename T>
void natural_numbers_smaller_value(T number, T end, int degree) {///(2.4) 6
	for_each(1, end, [&number, &degree](int value) {
		if (std::pow(sum_of_digits(value), degree) == number) {
			std::cout << value << std::endl;
		}
		});
}
template <typename T>
void natural_numbers_not_divisible(T last) {///(2.4) 7
	for_each(1, last, [](int value) {
		if (!is_divisible(value, 0)) {
			std::cout << value << std::endl;
		}
		});
}
template <typename T>
void find_reversible_pairs(T start, T start_2, T last) {///(2.4) 8
	for (; start <= last; ++start)
		for (int start_2 = 10; start_2 <= last; ++start_2)
			if (start * start_2 == (start % 10 * 10 + start / 10) * (start_2 % 10 * 10 + start_2 / 10))
				std::cout << start << " " << start_2 << std::endl;
}
template <typename T>
void increasing_numbers(T last) {///(2.4) 9
	for_each(1, last, [](int value) {
		if (is_increasing(value)) {
			std::cout << value << std::endl;
		}
		});
}
template <typename T>
void decreasing_numbers(T last) {///(2.4) 10
	for_each(1, last, [](int value) {
		if (is_not_increasing(value)) {
			std::cout << value << std::endl;
		}
		});
}
template <typename T>
void table_of_partitions_of_a_number_by_the_sum_of_three_terms(T last) {///(2.4) 11
	for (int i = 1; i <= last / 3; i++) {
		for (int j = i; j <= (last - i) / 2; j++) {
			int k = last - i - j;
			if (k >= j) {
				std::cout << i << " " << j << " " << k << std::endl;
			}
		}
	}
}
template <typename T>
void find_numbers(T last) {///(2.4) 12
	for_each(1, last, [](int value) {
		if (is_divisible(value, 0)) {
			std::cout << value << std::endl;
		}
		});
}