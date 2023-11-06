#pragma once
#include<algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include "functions.h"
 ////////////////////////////3.1.2
template<typename Iterator>
int print_powers_of_numbers(Iterator first, Iterator last, int value, int count) {// 1 2 3
	for (; first != last; first++) {
		if (std::fmod(std::log(*first) / std::log(value), 1) == 0) {
			std::cout << *first << " ";
			++count;
		}
	}
	return count;
}
template <typename Iterotor>
int checking_indexes_on_function(Iterotor first, Iterotor last, bool (*func)(int), int count,int count1) {///(3.1.2) 5 4 6
	for (; first != last; first++, count++) {
		if (func(count)) {
			std::cout << *first << std::endl;
			count1++;
		}
	}
	return count1;
}
template<class Iterator>
double indexes_to_values(Iterator first1, Iterator first2, Iterator last1, Iterator last2,int count,int sum,Iterator nul) {
	for (; first1 != last1; ++first1)
	{
		count++;
		for (first2=nul; first2 != last2; ++first2)
		{
			if (*first2 == count)
			{
				sum += *first2;
			}
		}
	}
	return sum;
}
/*template <typename Iterotor>
int find_smallest(Iterotor arr_first, Iterotor arr_second, Iterotor size_arr_first, Iterotor size_arr_second, int smallest) {///(3.1.2)  9
	for (; arr_first != size_arr_first; ++arr_first)
	{
		if (*arr_first < smallest) {
			smallest = *arr_first;
		}
	}
	for (; arr_second != size_arr_second; ++arr_second)
	{
		if (smallest == *arr_second)
		{
			return 0;
		}
	}
	return smallest;
}*/
template <typename Iterotor>
int find_largest(Iterotor arr_first, Iterotor arr_second, Iterotor size_arr_first, Iterotor size_arr_secondint, int largest) {///(3.1.2)  10
	for (; arr_first != size_arr_first; arr_first++) {
		for (; arr_second != size_arr_secondint; arr_second++) {
			if (*arr_first == *arr_second && *arr_first > largest) {
				largest = *arr_first;
				break;
			}
		}
	}
	return largest;
}
template <typename Iterotor>
int count_inversions(Iterotor first, Iterotor last, int inversions, int count, int result) {///(3.1.2)  11
	for (; first != last; first++, count++)
		for (; count + 1 != last; (count + 1)++)
			if (*first > *(first + (count + 1)))
				result++;
	return result;
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
/*template<typename T>
int maximum_among_negative_elements(T arr, T arr2, int size_1, int size_2, int (*func)(int)) {///(3.1.3) 2
	std::vector<double> mergedArr = mergeArrays(arr, arr2, size_1, size_2);
	for (auto item : mergedArr)
	{
		if (item < 0 && item > *func) {
			*func = *func(item, 0);
		}

	}
	return *func;
}*/
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
