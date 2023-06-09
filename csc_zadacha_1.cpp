#include <iostream>


int comparison(int num) {
	int t = 1, i = 1;
	do {
		t = 1 << i; // побитовый cдвиг единицы на i то же самое что 2 в степени i 
		if (num < t) {
			return i - 1;
		}
		++i;
	} while (1);
}


int main() {

	int n = 0, num = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> num;
		std::cout << comparison(num) << std::endl;
	}
}
