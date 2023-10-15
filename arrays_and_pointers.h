#pragma once
#include <cmath>
#include <iostream>
template<typename T>
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
double sum_to_minimum_term_value(T arr,int size) {//1,4
	double sum = 0;
	int count = 0;
	int min = *(arr);
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i)<min)
		{
			min = *(arr+i);
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
		if (abs(*(arr+i)) > max_module)
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
double sum_to_minimum_module_value(T arr,int size) {//9
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
double sum_between_maximum_and_minimum_modules(T arr,int size) {//11
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
	for (int i = count1; i < count2 ; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
 ////////////////////////////3.1.2
  /*template<typename T>
 double output_indices_that_multiples_2_and_number_numbers_that_multiples_2(T arr, int size) {
	 int c
	 for (int i = 0; i < size; i++)
	 {
		 if ((*(arr+i))/pow(2,i)
		 {

		 }
	 }
 }*/
 template<typename T>//1
 double output_numbers_that_are_powers_of_2(T arr,int size) {
	 int count = 0;
	 for (int i = 0; i < size; i++) {
		 int num = *(arr+i);
		 int temp = num;
		 while (temp % 2 == 0 && temp > 1) {
			 temp /= 2;
		 }
		 if (temp == 1) {
			 count++;
		 }
	 }
	 for (int i = 1; i < size; i*=2)
	 {
		 std::cout << *(arr + i) << std::endl;
	 }
	 return count;
 }
 template<typename T>//2 
 double output_numbers_that_are_powers_of_3(T arr, int size) {
	 int count = 0;
	 for (int i = 0; i < size; i++) {
		 int num = *(arr + i);
		 int temp = num;
		 while (temp % 3  == 0 && temp > 1) {
			 temp /= 3;
		 }
		 if (temp == 1) {
			 count++;
		 }
	 }
	 for (int i = 1; i < size; i*=3)
	 {
		 std::cout << *(arr + i) << std::endl;
	 }
	 return count;
 }
 template<typename T>//3
 double output_numbers_that_are_powers_of_5(T arr, int size) {
	 int count = 0;
	 for (int i = 0; i < size; i++) {
		 int num = *(arr + i);
		 int temp = num;
		 while (temp % 5 == 0 && temp > 1) {
			 temp /= 5;
		 }
		 if (temp == 1) {
			 count++;
		 }
	 }
	 for (int i = 1; i < size; i *= 5)
	 {
		 std::cout << *(arr + i) << std::endl;
	 }
	 return count;
 }