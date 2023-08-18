#include <iostream>
/***Add Function***/
int Add(int* a, int* b) {
	int sum = 0;
	sum = *a + *b;
	return sum;
}
/***Add using Third Pointer to store return value***/
void AddVal(int* a, int* b, int* result) {
	*result = *a + *b;
}
/***Swap Two Integers***/
void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
/***Get Factorial***/
void Factorial(int* a, int* result) {
	*result = 1;
	for (int i = 1; i <= *a; i++) {
		*result *= i;
	}
}