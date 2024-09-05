/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:29:36 by locharve          #+#    #+#             */
/*   Updated: 2024/09/05 18:27:38 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"
#include	"PhoneBook.hpp"

// set_param
// display_short
// displayContact XXX

std::string	Contact::get_param(t_param_id id)
{
	return (this->param[id]);
}

void	Contact::set_param(t_param_id p, std::string str)
{
	this->param[p] = str;
}

// in class Contact ?
static void	print_limit(std::string str, int limit)
{
	int	i;

	for (i = 0; i < limit - 1, str[i]; i++)
		std::cout << str[i];
	while (!str[i] && i < limit)
		std::cout << ' ';
	if (str[i])
	{
		if (str[i + 1])
			std::cout << '.';
		else
			std::cout << str[i];
	}
}

void	Contact::display_short(void)
{
	int	p;

	std::cout << p << "         |";
	for (p = 0; p < 5; p++)
	{
		print_limit(this->param[p], 10);
		if (p < 4)
			std::cout << '|';
	}
	std::cout << std::endl;
}