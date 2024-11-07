/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:13:47 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 12:07:18 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	setName("Toto");
	setInventory();
	std::cout << "------- Character default constructor called: "
	<< getName() << std::endl;
}

Character::Character(const Character& src) {
	*this = src;
	std::cout << "------- Character copy constructor called" << std::endl;
}

Character&	Character::operator=(const Character& src) {
	setName(src.getName());
	setInventory(src.getInventory());
	return (*this);
}

Character::~Character() {
	cleanInventory();
	std::cout << "======= Character destructor called" << std::endl;
}

Character::Character(std::string name): _name(name) {
	setInventory();
	std::cout << "------- Character string constructor called" << std::endl;
}

void	Character::setName(std::string name) {
	_name = name;
}

void	Character::setInventory() {
	_inventory = new AMateria*[POCKETS_NBR];
	for (int i = 0; i < POCKETS_NBR; i++)
		_inventory[i] = NULL;
}

void	Character::setInventory(AMateria** inv) {
	_inventory = new AMateria*[POCKETS_NBR];
	for (int i = 0; i < POCKETS_NBR; i++) {
		if (inv[i])
			_inventory[i] = inv[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

void	Character::cleanInventory() {
	for (int i = 0; i < POCKETS_NBR; i++) {
		if (_inventory[i])
			delete _inventory[i];
	}
	delete [] _inventory;
}

std::string const &	Character::getName() const {
	return (_name);
}

AMateria**	Character::getInventory() const {
	return (_inventory);
}

void	Character::equip(AMateria* m) {
	int	i = 0;
	
	while (_inventory[i] && i < POCKETS_NBR)
		i++;
	if (i < POCKETS_NBR)
		_inventory[i] = m;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}