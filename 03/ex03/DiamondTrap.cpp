/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:59:15 by locharve          #+#    #+#             */
/*   Updated: 2024/11/03 09:11:02 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("unnamed_clap_name"), _name("unnamed") {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
	std::cout << "------- DiamondTrap default constructor called: " << getName() << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name) {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
	std::cout << "------- DiamondTrap string constructor called: " << getName() << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src.getName() + "_clap_name"), _name(src.getName()) {
	*this = src;
	std::cout << "------- DiamondTrap copy constructor called: " << getName() << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& src) {
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "------- DiamondTrap destructor called: " << getName() << std::endl;
}

void	DiamondTrap::setClapTrapName(std::string name) {
ClapTrap::_name = name + "_clap_name";
}

std::string	DiamondTrap::getClapTrapName(void) const {
	return (ClapTrap::_name);
}

std::string	DiamondTrap::getName(void) const {
	return (this->_name);
}

int	DiamondTrap::isAlive(void) {
	if (getHitPoints() <= 0) {
		std::cout
			<< "DiamondTrap " << getName()
			<< " can't do anything: it's dead!"
			<< std::endl;
		return (0);
	}
	else
		return (1);
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0) {
		std::cout << "DiamondTrap " << getName() << " is already dead..." << std::endl;
		return ;
	}
	setHitPoints(getHitPoints() - amount);
	std::cout << "DiamondTrap " << getName() << " lost " << amount << " HP !" << std::endl;
	if (getHitPoints() <= 0)
		std::cout << "DiamondTrap " << getName() << " died !" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		if (getHitPoints() < 100) {
			if (getHitPoints() + amount > 100)
				amount = 100 - getHitPoints();
			std::cout
				<< "DiamondTrap " << getName()
				<< " repairs itself: its HP increases by " << amount << "." << std::endl;
			setHitPoints(getHitPoints() + amount);
			setEnergyPoints(getEnergyPoints() - 1);
		}
		else
			std::cout
				<< "DiamondTrap " << getName()
				<< " can't be repaired : it doesn't need it !" << std::endl;
	}
	else
		std::cout
			<< "DiamondTrap " << getName()
			<< " can't be repaired: it has no energy left !" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout
		<< "My name is " << getName() << std::endl
		<< "My ClapTrap name is " << getClapTrapName() << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const DiamondTrap& src) {
	os	<< src.getName() << " aka "
		<< src.getClapTrapName() << ":" << std::endl
		<< "\tHP: " << src.getHitPoints()
		<< "\tEP: " << src.getEnergyPoints()
		<< "\tAD: " << src.getAttackDamage();
	return (os);
}