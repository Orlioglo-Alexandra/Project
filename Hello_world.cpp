#include <iostream>

void fib(int n) {
	int a = 0, b = 1, c;
	if (n >= 1) std::cout << a << "\n";
	if (n >= 2) std::cout << b << "\n";
	for (int i = 3; i <= n; i++) {
		int c = a + b;
		std::cout << c << "\n";
		a = b;
		b = c;
	}
}

int main() {
	std::cout << "Hello, World!\n";
	int n;
	std::cin >> n;
	fib(n);
	return 0;
}
