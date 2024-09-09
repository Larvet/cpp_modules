/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:29:36 by locharve          #+#    #+#             */
/*   Updated: 2024/09/09 16:05:28 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"
#include	"PhoneBook.hpp"

std::string	Contact::get_param(t_param_id id)
{
	return (this->param[id]);
}

void	Contact::set_param(t_param_id p, std::string str)
{
	this->param[p].assign(str);
}

void	Contact::print_limit(std::string str, int limit)
{
	size_t	len;
	size_t	i;

	len = str.length();
	if (len <= 10)
	{
		for (i = 0; len + i < 10; i++)
			std::cout << ' ';
		std::cout << str;
	}
	else
	{
		for (i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
}

void	Contact::display_short(int index)
{
	int	p;

	std::cout << "         " << index << '|';
	for (p = 0; p < 5; p++)
	{
		this->print_limit(this->param[p], 10);
		if (p < 4)
			std::cout << '|';
	}
	std::cout << std::endl;
}

void	Contact::clear_params(void)
{
	int	i;

	for(i = 0; i < 5; i++)
		this->param[i].clear();
}