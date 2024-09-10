/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:12:49 by locharve          #+#    #+#             */
/*   Updated: 2024/09/10 13:26:50 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	<iostream>
#include	<iterator>

int	main(int argc, char *argv[])
{
	std::string				str;
	std::string::iterator	it;
	int						i;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; argv[i]; i++)
			str += argv[i];
		for (it = str.begin(); it != str.end(); it++)
			std::cout << (char)toupper(*it);
	}
	std::cout << std::endl;
	return (0);
}
