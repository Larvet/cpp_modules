/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:25:38 by locharve          #+#    #+#             */
/*   Updated: 2024/09/07 20:18:13 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"
#include	"PhoneBook.hpp"

void	PhoneBook::initPhoneBook(void)
{
	this->next_index = 0;
	this->filled = 0;
}

std::string	PhoneBook::askContact_param(int p)
{
	std::string	str;

	if (p == first_name)
		std::cout << "First name : ";
	else if (p == last_name)
		std::cout << "Last name : ";
	else if (p == nickname)
		std::cout << "Nickname : ";
	else if (p == phone_nbr)
		std::cout << "Phone number : ";
	else if (p == darkest_secret)
		std::cout << "Darkest secret : ";
	do {
		std::cin >> str;
	} while (str.empty());
	return (str);
}

void	PhoneBook::addContact(void)
{
	std::string		str;
	int				index;
	int				p;

	if (this->next_index < 8)
		index = this->next_index;
	else
	{
		index = 0;
		this->contact[index].clear_params();
	}
	for (p = 0; p < 5; p++)
	{
		str = this->askContact_param(p); // syntax ? v
		this->contact[index].set_param((t_param_id)p, str);
	}
	this->next_index = index + 1;
	this->filled++;
}

int	PhoneBook::displayPhoneBook(void)
{
	int	i;

	for (i = 0; i < this->filled; i++)
		this->contact[i].display_short(i);
	if (i == 0)
		std::cout << "No contacts to display." << std::endl;
	return (i);
}

Contact	PhoneBook::getContact(int i)
{
	return (this->contact[i]);
}

void	PhoneBook::displayContact(Contact c)
{
	int	i;

	for (i = 0; i < 5; i++)
		std::cout << c.get_param((t_param_id)i) << std::endl;
}

static int	isvalid(std::string str)
{
	return (str.length() == 1 && str[0] >= '0' && str[0] <= '9');
}

void	PhoneBook::searchContact(void)
{
	std::string		str;
	int				i;

	if (!displayPhoneBook())
		return ;
	do
	{
		std::cout << "Index of contact to display : ";
		std::cin >> str;
		if (!isvalid(str))
			std::cout << "Invalid index." << std::endl; //
		i = stoi(str);
		if (i >= 0 && i < this->next_index)
			this->displayContact(this->getContact(i)); //
		else
			std::cout << "Invalid index." << std::endl;
	}	while (!isvalid(str) || i < 0 || i >= this->next_index);
}

void	PhoneBook::wait_cmd(void)
{
	std::string	str;

	do	{
		std::cin >> str;
		if (str == "ADD")
			PhoneBook::addContact();
		else if (str == "SEARCH")
			PhoneBook::searchContact();
	}	while (str != "EXIT");	
}