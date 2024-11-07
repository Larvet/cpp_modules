/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:04:41 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 12:22:07 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
//#include "AMateria.hpp"

MateriaSource::MateriaSource() {
	setStock();
	std::cout << "------- MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	*this = src;
	std::cout << "------- MateriaSource copy constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src) {
	setStock(src.getStock());
	return (*this);
}

MateriaSource::~MateriaSource() {
	cleanStock();
	std::cout << "======= MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m) {
	int	i = 0;

	while (i < STOCK_SIZE && _stock[i])
		i++;
	if (i < STOCK_SIZE)
		_stock[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	int	i = 0;

	while (i < STOCK_SIZE && _stock[i]->getType() != type)
		i++;
	if (_stock[i]->getType() == type)
		return (_stock[i]->clone());
	else
		return (0);
}

void	MateriaSource::setStock() {
	_stock = new AMateria*[STOCK_SIZE];
	for (int i = 0; i < STOCK_SIZE; i++)
		_stock[i] = NULL;
}

void	MateriaSource::setStock(AMateria** stock) {
	_stock = new AMateria*[STOCK_SIZE];
	for (int i = 0; i < STOCK_SIZE; i++) {
		if (stock[i])
			_stock[i] = stock[i]->clone();
		else
			_stock[i] = NULL;
	}
}

AMateria**	MateriaSource::getStock() const {
	return (_stock);
}

void	MateriaSource::cleanStock() {
	for (int i = 0; i < STOCK_SIZE; i++) {
		if (_stock[i])
			delete _stock[i];
	}
	delete [] _stock;
}
