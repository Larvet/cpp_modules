/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:35:45 by locharve          #+#    #+#             */
/*   Updated: 2024/11/03 09:11:11 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "------- FragTrap default constructor called: " << getName() << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "------- FragTrap string constructor called: " << getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap(src.getName()) {
	*this = src;
	std::cout << "------- FragTrap copy constructor called: " << getName() << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& src) {
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "------- FragTrap destructor called: " << getName() << std::endl;
}

int	FragTrap::isAlive(void) {
	if (getHitPoints() <= 0) {
		std::cout
			<< "FragTrap " << getName()
			<< " can't do anything: it's dead!"
			<< std::endl;
		return (0);
	}
	else
		return (1);
}

void	FragTrap::attack(const std::string& target) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		std::cout
			<< "FragTrap " << getName()
			<< " attacks " << target
			<< ", causing " << getAttackDamage()
			<< " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout
			<< "FragTrap " << getName()
			<< " can't attack: has no energy left !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0) {
		std::cout << "FragTrap " << getName() << " is already dead..." << std::endl;
		return ;
	}
	setHitPoints(getHitPoints() - amount);
	std::cout << "FragTrap " << getName() << " lost " << amount << " HP !" << std::endl;
	if (getHitPoints() <= 0)
		std::cout << "FragTrap " << getName() << " died !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		if (getHitPoints() < 100) {
			if (getHitPoints() + amount > 100)
				amount = 100 - getHitPoints();
			std::cout
				<< "FragTrap " << getName()
				<< " repairs itself: its HP increases by " << amount << "." << std::endl;
			setHitPoints(getHitPoints() + amount);
			setEnergyPoints(getEnergyPoints() - 1);
		}
		else
			std::cout
				<< "FragTrap " << getName()
				<< " can't be repaired : it doesn't need it !" << std::endl;
	}
	else
		std::cout
			<< "FragTrap " << getName()
			<< " can't be repaired: it has no energy left !" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout
		<< "FragTrap " << getName()
		<< " requests a high five!" << std::endl;
}