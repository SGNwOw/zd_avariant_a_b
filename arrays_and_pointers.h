#pragma once
#include<algorithm>
#include <cmath>
#include <iostream>
#include <vector>
template<class Iterator, class UnaryOperation>
void for_each(Iterator first, Iterator last, UnaryOperation up) {
	for (; first != last; ++first)
	{
		up(*first);
	}
}


 ////////////////////////////3.1.2
template<typename Iterator>
int print_powers_of_numbers(Iterator first, Iterator last, int value, int count) {///(3.1.2) 1 2 3
	for (; first != last; first++) {
		if (std::fmod(std::log(*first) / std::log(value), 1) == 0) {
			std::cout << *first << " ";
			++count;
		}
	}
	return count;
}
 template<typename T>//4
 double output_indices_and_numbers_of_equal_perfect_squares(T arr, int size) {
	 int count = 0;
	 for (int i = 0; i < size; i++) {
		 if (sqrt(i) == floor(sqrt(i))) {
			 count++;
		 }
	 }
	 for (int i = 0; i*i < size;i++)
	 {
		 std::cout << *(arr + i*i) << std::endl;
	 }
	 return count;
 }
template<typename T>//5
double output_indices_of_prime_numbers_and_themselves(T arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		int divider = 2;
		while ((divider < *(arr+i) - 1) && (*(arr+i) % divider) != 0)
		{
			divider++;
		}
		if ((*(arr + i) % divider) != 0) {
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
template<typename T>
double index_output_fibonacci_numbers_and_themselves(T arr, int size) {//?
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i+3)==*(arr+i+2)+*(arr+i+1))
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
 /////////////////////////////////////////////////3.1.3
template<typename T>
double combining_and_finding_sum_of_array(T arr3, T arr1, T arr2,int size1,int size2,int size3) {//1
	int sum = 0;
	for (int i = 0; i < size2; i++)
	{
		*(arr3 + i) = *(arr2 + i);
	}
	for (int i = 0; i < size1; i++)
	{
		*(arr3 + size1 + i) = *(arr1 + i);
	}
	for (int i = 0;  i < size3;  i++)
	{
		if (*(arr3 + i) > 0)
		{
			sum += *(arr3 + i);
		}
	}
return sum;
}
template<typename T>
double combining_and_find_negative_maximum_of_array(T arr3, T arr1, T arr2, int size1, int size2, int size3) {//2
	int sum = 0;
	int max = -10;
	for (int i = 0; i < size2; i++)
	{
		*(arr3 + i) = *(arr2 + i);
	}
	for (int i = 0; i < size1; i++)
	{
		*(arr3 + size1 + i) = *(arr1 + i);
	}
	for (int i = 0; i < size3; i++)
	{
		if (*(arr3+i)<0)
		{
			if (*(arr3 + i) > max)
			{
				max = *(arr3 + i);
			}
		}
	}
	return max;
}
template<typename T>
double finding_maximum_sum_pairs_of_numbers(T arr, int size) {//3
	int max_sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr) + *(arr + size - i) > max_sum)
		{
			max_sum = *(arr) + *(arr + size - i);
		}
	}
	return max_sum;
}
template <typename T>
double finding_minimum_sum_pairs_of_numbers(T arr, int size) {//4
	int min_sum = 100;
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i) + *(arr + size-1-i) < min_sum)
		{
			min_sum = *(arr+i)+*(arr+size-1-i);
		}
	}
	return min_sum;
}
template<typename T>
double find_of_products_of_pairs(T arr, int size) {//5
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i) * *(arr + i + 1);
	}
	return sum;
}
template<typename T>
void display_elements_that_occur_only_once(T arr, int size) {//6
	for (int i = 0; i < size; i++)
	{
		int count = 0;
		for (int j = 0; j < size; j++)
		{
			if (i!=j && *(arr + i) == *(arr + j))
			{
				++count;
			}
		}
		if (!count)
		{
			std::cout << *(arr + i) << std::endl;
		}
	}
}
