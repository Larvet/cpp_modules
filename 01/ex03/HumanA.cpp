/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:07:13 by locharve          #+#    #+#             */
/*   Updated: 2024/09/25 11:40:51 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & w): w(w)
{
	this->setName(name);
}

HumanA::~HumanA(void){}

std::string	HumanA::getName(void)
{
	return (this->name);
}

void	HumanA::setName(std::string name)
{
	this->name.assign(name);
}

std::string	HumanA::getWeaponType(void)
{
	return(this->w.getType());
}

void	HumanA::attack(void)
{
	std::cout
		<< this->getName() << " attacks with their "
		<< this->getWeaponType() << std::endl;
}