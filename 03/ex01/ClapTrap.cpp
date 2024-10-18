/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:10:05 by locharve          #+#    #+#             */
/*   Updated: 2024/10/16 11:54:08 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "------- ClapTrap default constructor called: " << getName() << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "------- ClapTrap string constructor called: " << getName() << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad): _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad) {
	std::cout << "------- ClapTrap complete constructor called: " << getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	std::cout << "------- ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called: " << getName() << std::endl;
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

void	ClapTrap::attack(const std::string& target) {
	if (getEnergyPoints()) {
		std::cout
			<< "ClapTrap " << getName()
			<< " attacks " << target
			<< ", causing " << getAttackDamage()
			<< " !" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout
			<< "Claptrap " << getName()
			<< " can't attack: has no energy left !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	setHitPoints(getHitPoints() - amount);
	if (getHitPoints() <= 0)
		std::cout << "ClapTrap " << getName() << " died !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints()) {
		if (getHitPoints() < 10) {
			std::cout
				<< "ClapTrap " << getName()
				<< " repairs itself !" << std::endl;
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
			<< "Claptrap " << getName()
			<< " can't be repaired: it has no energy left !" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const ClapTrap& src) {
	os	<< src.getName() << ":" << std::endl << "\tHP: " << src.getHitPoints()
		<< "\tEP: " << src.getEnergyPoints()
		<< "\tAD: " << src.getAttackDamage();
	return (os);
}