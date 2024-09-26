/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:27:16 by locharve          #+#    #+#             */
/*   Updated: 2024/09/24 12:39:47 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->setName(name);
	this->w = NULL;
}

HumanB::~HumanB(void){}

std::string	HumanB::getName(void)
{
	return (this->name);
}

void	HumanB::setName(std::string name)
{
	this->name.assign(name);
}

std::string	HumanB::getWeaponType(void)
{
	if (this->w)
		return(this->w->getType());
	else
		return ("bare arms");
}

void	HumanB::setWeapon(Weapon & w)
{
	this->w = &w;
}

void	HumanB::attack(void)
{
	std::cout
		<< this->getName() << " attacks with their "
		<< this->getWeaponType() << std::endl;
}