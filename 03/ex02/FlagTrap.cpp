/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:35:45 by locharve          #+#    #+#             */
/*   Updated: 2024/10/23 08:36:19 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) {
	setName("unnamed");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "------- FlagTrap default constructor called: " << getName() << std::endl;
}

FlagTrap::FlagTrap(std::string name) {
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "------- FlagTrap string constructor called: " << getName() << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& src) {
	*this = src;
	std::cout << "------- FlagTrap copy constructor called: " << getName() << std::endl;
}

FlagTrap&	FlagTrap::operator=(const FlagTrap& src) {
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

FlagTrap::~FlagTrap(void) {
	std::cout << "------- FlagTrap destructor called: " << getName() << std::endl;
}

int	FlagTrap::isAlive(void) {
	if (getHitPoints() <= 0) {
		std::cout
			<< "FlagTrap " << getName()
			<< " can't do anything: it's dead!"
			<< std::endl;
		return (0);
	}
	else
		return (1);
}

void	FlagTrap::attack(const std::string& target) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		std::cout
			<< "FlagTrap " << getName()
			<< " attacks " << target
			<< ", causing " << getAttackDamage()
			<< " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout
			<< "FlagTrap " << getName()
			<< " can't attack: has no energy left !" << std::endl;
}

void	FlagTrap::takeDamage(unsigned int amount) {
	if (!isAlive())
		return ;
	setHitPoints(getHitPoints() - amount);
	if (getHitPoints() <= 0)
		std::cout << "FlagTrap " << getName() << " died !" << std::endl;
}

void	FlagTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		if (getHitPoints() < 100) {
			std::cout
				<< "FlagTrap " << getName()
				<< " repairs itself!" << std::endl;
			setHitPoints(getHitPoints() + amount);
			setEnergyPoints(getEnergyPoints() - 1);
		}
		else
			std::cout
				<< "FlagTrap " << getName()
				<< " can't be repaired : it doesn't need it !" << std::endl;
	}
	else
		std::cout
			<< "FlagTrap " << getName()
			<< " can't be repaired: it has no energy left !" << std::endl;
}

void	FlagTrap::highFivesGuys(void) {
	std::cout
		<< "FlagTrap " << getName()
		<< " requests a high five!" << std::endl;
}