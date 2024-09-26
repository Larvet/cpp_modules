/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:16:31 by locharve          #+#    #+#             */
/*   Updated: 2024/09/25 12:02:13 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* private member fonctions */

void	Harl::debug(void)
{
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl<< std::endl;
}

void	Harl::info(void)
{
	std::cout
		<<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout
		<<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
		<< std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout
		<<  "This is unacceptable! I want to speak to the manager now."
		<< std::endl << std::endl;
}

/* public member fonctions */

void	Harl::complain(std::string level)
{
	std::string	strtab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fptr[4])(void) = {&Harl::debug,
		&Harl::info, &Harl::warning, &Harl::error};
	int	i;

	for (i = 0; i < 4 && level != strtab[i]; i++);
	if (level == strtab[i])
		(this->*fptr[i])();
}

void	Harl::filter(std::string level)
{
	std::string	strtab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	l;

	for (l = 0; l < 4 && level != strtab[l]; l++);
	switch (l)
	{
		case 0:
		{
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
		}
		/* fall through */
		case 1:
		{
			std::cout << "[ INFO ]" << std::endl;
			this->info();
		}
		/* fall through */
		case 2:
		{
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
		}
		/* fall through */
		case 3:
		{
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break ;
		}
		default:
		{
			std::cout
				<< "[ Probably complaining about insignificant problems ]"
				<< std::endl;
		}
	}
}