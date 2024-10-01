#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "------- Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "------- String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	std::cout << "------- Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
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

int	ClapTrap::getAttackDamage(void) {
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
		setEnergyPoints(getHitPoints() - 1);
	}
	else
		std::cout
			<< "Claptrap " << getName()
			<< " has no energy left ! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	setHitPoints(getHitPoints() - amount);
	if (getHitPoints() <= 0)
		std::cout << "ClapTrap " << getName() << " died !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints()) {
		std::cout
			<< "ClapTrap " << getName()
			<< " repairs itself !" << std::endl;
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout
			<< "Claptrap " << getName()
			<< " has no energy left ! " << std::endl;
}
