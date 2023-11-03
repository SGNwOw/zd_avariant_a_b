#pragma once
#include <iostream>
#include<algorithm>
#include <cmath>
#include <vector>
#include "functions.h"
template <typename Iterator>
double sum_before_min(Iterator first, Iterator last) {//1,4
	return accumulate(first, min_1(first, last), 0);
}
template <typename Iterator>
double sum_before_max(Iterator first, Iterator last) {//2,5
	return accumulate(first, max_1(first, last), 0);
}
template <typename Iterator>
double sum_between_min_max(Iterator first, Iterator last) {//3,10
	return accumulate(min_1(first, last), max_1(first, last), 0);
}
template <typename Iterator>
double sum_after_max(Iterator first, Iterator last) {//6
	return accumulate(max_1(first, last),last, 0);
}
template <typename Iterator>
double sum_after_module_max(Iterator first, Iterator last) {//7
	return accumulate(max_module_1(first,last), last, 0);
}
template <typename Iterator>
double sum_after_module_min(Iterator first, Iterator last) {//8
	return accumulate(min_module_1(first, last), last, 0);
}
template <typename Iterator>
double sum_before_module_min(Iterator first, Iterator last) {//9
	return accumulate(first, min_module_1(first, last), 0);
}
template <typename Iterator>
double sum_between_module_min_max(Iterator first, Iterator last) {//11
	return accumulate(min_module_1(first, last) + 1, max_module_1(first, last), 0);
}
template<class Iterator>
double sum_before_min_positive_and_max_negative(Iterator first,Iterator last) {//12
	int* first_positive = find_if(first,last, [](int* a) {return *a > 0; });
	int* min_positive = search1(first_positive,last, [](int* a, int* b) {
		if (*a < 0)
		{
			return false;
		}
		return *a < *b;
		});
	int* first_negative = find_if(first, last, [](int* a) {return *a < 0; });
	int* max_negative = search1(first_negative, last, [](int* a, int* b) {
		if (*a > 0)
		{
			return false;
		}
		return *a > *b;
		});
	return accumulate(min_positive, max_negative, 0);
}
template<class T>
double sum_between_maximum_and_minimum_value(T arr, int size) {//3,10
	double sum = 0;
	int count1 = 0;
	int count2 = 0;
	int min = *(arr);
	int max = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < min)
		{
			min = *(arr + i);
			count1 = i;
		}
		if (*(arr + i) > max)
		{
			max = *(arr + i);
			count2 = i;
		}
	}
	for (int i = count1 + 1; i < count2; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
double sum_to_minimum_term_value(T arr, int size) {//1,4
	double sum = 0;
	int count = 0;
	int min = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < min)
		{
			min = *(arr + i);
			count = i;
		}
	}
	for (int i = 0; i < count; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
double sum_to_maximum_term_value(T arr, int size) {//2,5
	double sum = 0;
	int count = 0;
	int max = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) >= max)
		{
			max = *(arr + i);
			count = i;
		}
	}
	for (int i = 0; i < count; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}

template<typename T>
double sum_after_maximum_value(T arr, int size) {//6
	double sum = 0;
	int count = 0;
	int max = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
			count = i;
		}
	}
	for (int i = count + 1; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
double sum_after_maximum_module_value(T arr, int size) {//7
	double sum = 0;
	int count = 0;
	int max_module = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (abs(*(arr + i)) > max_module)
		{
			max_module = abs((*(arr + i)));
			count = i;
		}
	}
	for (int i = count + 1; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
double sum_after_minimum_module_value(T arr, int size) {//8
	double sum = 0;
	int count = 0;
	int min_module = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (abs(*(arr + i)) < min_module)
		{
			min_module = abs(*(arr + i));
			count = i;
		}
	}
	for (int i = count + 1; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
double sum_to_minimum_module_value(T arr, int size) {//9
	int sum = 0;
	int count = 0;
	int min_module = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (abs(*(arr + i)) < min_module)
		{
			min_module = abs(*(arr + i));
			count = i;
		}
	}
	for (int i = 0; i < count; i++)
	{
		sum += *(arr + i);
	}return sum;
}
template<typename T>
double sum_between_maximum_and_minimum_modules(T arr, int size) {//11
	int sum = 0;
	int max_module = *(arr);
	int min_module = *(arr);
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(*(arr + i)) > max_module)
		{
			max_module = abs(*(arr + i));
			count2 = i;
		}
		if (abs(*(arr + i)) < min_module)
		{
			min_module = abs(*(arr + i));
			count1 = i;
		}
	}
	for (int i = count1; i < count2; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
int sum_between_minimum_positive_and_maximum_negative(T arr, int size) {//12
	int sum = 0;
	int max = *(arr);
	int min = *(arr);
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < min)
		{
			min = *(arr + i);
		}
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}
	int min_pos = max;
	int max_neg = min;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0 && *(arr + i) < min_pos)
		{
			min_pos = *(arr + i);
			count1 = i;
		}
		if (*(arr + i) < 0 && *(arr + i) > max_neg)
		{
			max_neg = *(arr + i);
			count2 = i;
		}
	}
	for (int i = count1; i < count2; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}