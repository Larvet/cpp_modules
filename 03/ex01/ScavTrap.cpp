/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:32:53 by locharve          #+#    #+#             */
/*   Updated: 2024/10/16 11:54:02 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "------- ScavTrap string constructor called: " << getName() << std::endl;
} */

ScavTrap::ScavTrap(void) {
	std::cout << "------- ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ScavTrap::ClapTrap(name) {
//	*this = ClapTrap(name, 100, 50, 20);
	std::cout << "------- ScavTrap string constructor called: " << getName() << std::endl;
//	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src): ScavTrap::ClapTrap(src) {
	std::cout << "------- ScavTrap copy constructor called: " << getName() << std::endl;
	*this = src;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& src) {
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "------- ScavTrap destructor called :" << getName() << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (getEnergyPoints()) {
		std::cout
			<< "ScavTrap " << getName()
			<< " attacks " << target
			<< ", causing " << getAttackDamage()
			<< " !" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout
			<< "ScavTrap " << getName()
			<< " can't attack: has no energy left !" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->getName() << " is guarding the Gate !" << std::endl;
}