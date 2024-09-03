/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:12:49 by locharve          #+#    #+#             */
/*   Updated: 2024/09/03 12:25:20 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	str;
	int	i, j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; argv[i]; i++)
	{
		str = argv[i];
		for (j = 0; str[j]; j++)
			std::cout << (char)toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
}
