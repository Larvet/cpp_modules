/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:10:05 by locharve          #+#    #+#             */
/*   Updated: 2024/11/02 12:54:35 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "------- ClapTrap default constructor called: " << getName() << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "------- ClapTrap string constructor called: " << getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	*this = src;
	std::cout << "------- ClapTrap copy constructor called: " << getName() << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "------- ClapTrap destructor called: " << getName() << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return (_name);
}

int	ClapTrap::getHitPoints(void) const {
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const {
	return (_attackDamage);
}

void	ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setHitPoints(int n) {
	_hitPoints = n;
}

void	ClapTrap::setEnergyPoints(int n) {
	_energyPoints = n;
}

void	ClapTrap::setAttackDamage(int n) {
	_attackDamage = n;
}

int	ClapTrap::isAlive(void) {
	if (getHitPoints() <= 0) {
		std::cout
			<< "ClapTrap " << getName()
			<< " can't do anything: it's dead!"
			<< std::endl;
		return (0);
	}
	else
		return (1);
}

void	ClapTrap::attack(const std::string& target) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		std::cout
			<< "ClapTrap " << getName()
			<< " attacks " << target
			<< ", causing " << getAttackDamage()
			<< " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout
			<< "ClapTrap " << getName()
			<< " can't attack: has no energy left !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0) {
		std::cout << "ClapTrap " << getName() << " is already dead..." << std::endl;
		return ;
	}
	setHitPoints(getHitPoints() - amount);
	std::cout << "ClapTrap " << getName() << " lost " << amount << " HP !" << std::endl;
	if (getHitPoints() <= 0)
		std::cout << "ClapTrap " << getName() << " died !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return ;
	if (getEnergyPoints()) {
		if (getHitPoints() < 10) {
			if (getHitPoints() + amount > 10)
				amount = 10 - getHitPoints();
			std::cout
				<< "ClapTrap " << getName()
				<< " repairs itself: its HP increases by " << amount << "." << std::endl;
			setHitPoints(getHitPoints() + amount);
			setEnergyPoints(getEnergyPoints() - 1);
		}
		else
			std::cout
				<< "ClapTrap " << getName()
				<< " can't be repaired : it doesn't need it !" << std::endl;
	}
	else
		std::cout
			<< "ClapTrap " << getName()
			<< " can't be repaired: it has no energy left !" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const ClapTrap& src) {
	os	<< src.getName() << ":" << std::endl << "\tHP: " << src.getHitPoints()
		<< "\tEP: " << src.getEnergyPoints()
		<< "\tAD: " << src.getAttackDamage();
	return (os);
}