/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:49:37 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 12:52:06 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
//#include "ICharacter.hpp"
#include "Character.hpp"
//#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main() {
	std::cout << std::endl
		<< "/////// subject tests ///////"
		<< std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	std::cout << std::endl
		<< "/////// some other tests ///////"
		<< std::endl << std::endl;

	Ice	ice1;

	std::cout << ice1.getType() << std::endl;

	AMateria*	ice2 = new Ice();
	std::cout << ice2->getType() << std::endl;
	delete ice2;

	Cure	cure1;

	AMateria*	cure2 = cure1.clone();
	std::cout << cure2->getType() << std::endl;
	delete cure2;

	Character	johnny("Johnny");
	
	return (0);
}