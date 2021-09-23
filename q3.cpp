#include<iostream>

int* findLocalExtremes(int arr[]) {
	
}

int main() {
	int numbers[20];
	int i = 0;
	int val = 0;
	std::cout << "Enter an integer value: ";
	while (i < 20 && std::cin >> val) {
		numbers[i] = val;
		i++;
		if (i < 20) {
			std::cout << "Enter an integer value: ";
		}
	}
	std::cout << "Once again, this is all that I could do, and even this I am not sure I did correctly."
}
