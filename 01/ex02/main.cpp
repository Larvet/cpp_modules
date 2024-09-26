/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:00:23 by locharve          #+#    #+#             */
/*   Updated: 2024/09/13 15:00:24 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string &	stringREF = str;

	std::cout
		<< "Memory address of the string variable: " << &str << std::endl
		<< "Memory address held by stringPTR:      " << stringPTR << std::endl
		<< "Memory address held by stringREF:      " << &stringREF << std::endl
		<< "Value of the string variable:          " << str << std::endl
		<< "Value pointed to by stringPTR:         " << *stringPTR << std::endl
		<< "Value pointed to by stringREF:         " << stringREF << std::endl;
	return (0);
}
