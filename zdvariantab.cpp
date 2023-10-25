#include "arrays_and_pointers.h"
#include "loops.h"
#include "3.1.1.h"
int main() {
	std::vector<int> v{ 3,1,14,1,0 };
	std::cout << sum_to_maximum_term_value(v);
	const int size = 10;
	int arr[size]{ 1,2,3,3,0,6,7,8,9,3 };
	int arr1[] = { 1, -2, 3, -4, 5 };
	int arr2[] = { -6, 7, -8, 9 ,-10 };
	const int size1 = sizeof(arr1) / sizeof(arr1[0]);
	const int size2 = sizeof(arr2) / sizeof(arr2[0]);
	const int size3 = size1 + size2;
	int arr3[size3];
	//std::cout << sum_between_maximum_and_minimum_value(arr, arr + 10, 0, 0, 0);
}