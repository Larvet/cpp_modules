/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printBits.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:50:41 by locharve          #+#    #+#             */
/*   Updated: 2024/09/23 16:32:59 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	printBits(void *src, size_t size) {
	unsigned char	*ptr = new unsigned char[size];
	if (ptr != nullptr) {
		for (size_t i = 0; i < size; i++) {
			ptr[i] = (*(int*)src >> ((8 * (size - i - 1)) - 1));
			std::cout << (int)ptr[i];
			*(int *)src -= (*(int*)src >> (8 * (size - i - 1) - 1) << (8 * (size - i - 1) - 1));
		}
//		for (int i = 0; i < size; i++)
//			std::cout << 
	}

/*	unsigned char*	ptr = (unsigned char*)src;
	std::cout
		<< *(int*)src << std::endl
		<< (int)*(ptr) << ' ' << (int)*(ptr + 1)
		<< ' ' << (int)*(ptr + 2) << ' '
		<< (int)*(ptr + 3) << std::endl;
	int*	p2 = (int*)src;
	std::cout << "p2 = " << *p2 << std::endl;
	for (size_t i = 0; i < size; i++) {
//		ptr[i] = *(unsigned char*)(src + i);
		std::cout << '(' << (int)ptr[i] << ") ";
		for (int b = 7; b >= 0; b--) {
		//	std::cout << (ptr[i] >> b);
		//	ptr[i] -= ((ptr[i] >> b) << b);
		}
		if (i < size - 1)
			std::cout << ' ';
	}
*/
}

int	main(void) {
	int	n = 2147483647;

	printBits(&n, sizeof(n));
	return (0);
}
