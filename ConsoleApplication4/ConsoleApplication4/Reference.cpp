#include <iostream>
void Add(int a, int b, int& result) {
	result = a + b;
}

void Factorial(int a, int& result) {
	result = 1;
	for (int i = 1; i <= a; i++) {
		result *= i;
	}
}

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}