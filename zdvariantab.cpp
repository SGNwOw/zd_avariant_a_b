﻿#include "arrays_and_pointers.h"
#include "loops.h"
#include "3.1.1.h"
int main() {
	//std::vector<int> v{ 3,1,14,1,0 };
	//std::cout << sum_to_maximum_term_value(v);
	const int size = 10;
	int arr[size]{1,2,3,4,5,0,7,8,9,10};
	int arr1[] = { 1,1,1,1,-1 };
	int arr2[] = { 2,1,1,1,1 };
	const int size1 = sizeof(arr1) / sizeof(arr1[0]);
	const int size2 = sizeof(arr2) / sizeof(arr2[0]);
	const int size3 = size1 + size2;
	int arr3[size3];
	//std::cout << find_maximum_sum_of_divisors(2,7,0);
	std::cout << max_sum_of_divisors_v2(1,13,0);
}