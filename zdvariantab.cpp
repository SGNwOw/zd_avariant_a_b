#include "arrays_and_pointers.h"
#include "loops.h"
int main() {
	const int size = 10;
	int arr[size]{1,1,3,3,5,6,7,8,9,15};
	int arr1[] = { 1, -2, 3, -4, 5 };
	int arr2[] = { -6, 7, -8, 9 ,-10};
	const int size1 = sizeof(arr1) / sizeof(arr1[0]);
	const int size2 = sizeof(arr2) / sizeof(arr2[0]);
	const int size3 = size1 + size2;
	int arr3[size3];
	display_elements_that_occur_only_once(arr, size);
}