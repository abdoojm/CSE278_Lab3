#include<iostream>

void swap(int &a, int &b);

int main() {
	int a = 2;
	int b = 10;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
}

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
