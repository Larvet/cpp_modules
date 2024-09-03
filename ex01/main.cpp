/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:18:23 by locharve          #+#    #+#             */
/*   Updated: 2024/09/03 13:30:46 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"
#include	"PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	str;

	std::cin >> str;
	if (str == "ADD")
		phonebook::add();
	return (0);
}
