/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:25:38 by locharve          #+#    #+#             */
/*   Updated: 2024/09/05 18:34:21 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"
#include	"PhoneBook.hpp"

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
	std::cin >> str;
	return (str);
}

void	PhoneBook::addContact(void)
{
	std::string		str;
	int				index;
	int				p;

	if (this->next_index < 7)
		index = this->next_index;
	else
		index = 0;
	for (p = 0; p < 5; p++)
	{
		str = this->askContact_param(p); // syntax ? v
		this->contact[index].set_param((t_param_id)p, str);
	}
}

int	PhoneBook::displayPhoneBook(void)
{
	int	i;

	for (i = 0; i < this->next_index + 1; i++)
		this->contact[i].display_short();
	if (!i)
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
		i = stoi(str);
		if (i >= 0 && i < this->next_index)
			this->displayContact(this->getContact(i)); //
		else
			std::cout << "Invalid index. Please retry." << std::endl;
	}	while (i < 0 || i > this->next_index);
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