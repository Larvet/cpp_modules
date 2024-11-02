/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:32:53 by locharve          #+#    #+#             */
/*   Updated: 2024/11/02 12:55:44 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
//	setName("unnamed");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "------- ScavTrap default constructor called: " << getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
//	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "------- ScavTrap string constructor called: " << getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
	*this = src;
	std::cout << "------- ScavTrap copy constructor called: " << getName() << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& src) {
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "------- ScavTrap destructor called: " << getName() << std::endl;
}

int	ScavTrap::isAlive(void) {
	if (getHitPoints() <= 0) {
		std::cout
			<< "ScavTrap " << getName()
			<< " can't do anything: it's dead!"
			<< std::endl;
		return (0);
	}
	else
		return (1);
}

void	ScavTrap::attack(const std::string& target) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		std::cout
			<< "ScavTrap " << getName()
			<< " attacks " << target
			<< ", causing " << getAttackDamage()
			<< " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout
			<< "ScavTrap " << getName()
			<< " can't attack: has no energy left !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0) {
		std::cout << "ScavTrap " << getName() << " is already dead..." << std::endl;
		return ;
	}
	setHitPoints(getHitPoints() - amount);
	std::cout << "ScavTrap " << getName() << " lost " << amount << " HP !" << std::endl;
	if (getHitPoints() <= 0)
		std::cout << "ScavTrap " << getName() << " died !" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		if (getHitPoints() < 100) {
			if (getHitPoints() + amount > 100)
				amount = 100 - getHitPoints();
			std::cout
				<< "ScavTrap " << getName()
				<< " repairs itself: its HP increases by " << amount << "." << std::endl;
			setHitPoints(getHitPoints() + amount);
			setEnergyPoints(getEnergyPoints() - 1);
		}
		else
			std::cout
				<< "ScavTrap " << getName()
				<< " can't be repaired : it doesn't need it !" << std::endl;
	}
	else
		std::cout
			<< "ScavTrap " << getName()
			<< " can't be repaired: it has no energy left !" << std::endl;
}

void	ScavTrap::guardGate(void) {
	if (!isAlive())
		return ;
	std::cout << "ScavTrap " << this->getName() << " is guarding the Gate !" << std::endl;
}