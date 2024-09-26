#include <iostream>

void	printBits(const void* src, size_t size) {
	unsigned char*	ptr = (unsigned char*)src;
	unsigned char*	tab = new unsigned char[size];
	if (tab != nullptr) {
		for (size_t i = 0; i < size; i++) {
			tab[i] = ptr[i];
			std::cout << (int)tab[i] << std::endl;
		}
		delete [] tab;
	}
}

void	printIntBits(int n) {
	unsigned char*	ptr = (unsigned char*)&n;
	size_t	size = sizeof(n);
	for (size_t i = 0; i < size; i++) {
		std::cout << (int)ptr[i] << ' ';
	}
	std::cout << std::endl;
}

int	main(void) {
	int	n = -2147483648;
	char str[3] = {0, 1, 2};

	std::cout << "n" << std::endl;
	printBits(&n, sizeof(n));
	std::cout << std::endl;
	printIntBits(n);

	std::cout << std::endl << "str" << std::endl;
	printBits(str, 3);
	return (0);
}
