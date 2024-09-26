#include <stdio.h>

void	printBits(int n) {
	unsigned char*	ptr = (unsigned char*)&n;
	size_t	size = sizeof(n);
	for (size_t i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
}

int	main(void) {
	int	n = 2147483647;

	printBits(n);
	return (0);
}
