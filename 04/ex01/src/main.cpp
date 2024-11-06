/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:57:24 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 10:48:59 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define ANIMAL_NBR 10

int	main() {
	Brain	brain;

	brain.setIdea("eat");
	brain.setIdea("sleep");
	brain.setIdea("think");
	std::cout << "brain ideas:" << std::endl;
	brain.printIdeas();
	
	Brain	brian(brain);
	std::cout << "brian ideas:" << std::endl;
	brian.printIdeas();

	Animal*	tab;
	tab = new Animal[ANIMAL_NBR];

	for (int i = 0; i < ANIMAL_NBR; i++) {
		std::cout << "Animal[" << i << "]" << std::endl;
		if (i % 2)
			tab[i] = Dog();
		else
			tab[i] = Cat();
	}

	for (int i = 0; i < ANIMAL_NBR; i++) {
		std::cout << tab[i].getType() << ": ";
		tab[i].makeSound();
	}

	for (int i = 0; i < ANIMAL_NBR; i++) {
		tab[i].~Animal();
	}
	delete [] tab;

	std::cout << std::endl
		<< "========== real test =========="
		<< std::endl << std::endl;
	Animal**	animalTab = new Animal*[ANIMAL_NBR];
	for (int i = 0; i < ANIMAL_NBR; i++) {
		std::cout << "Animal[" << i << "]" << std::endl;
		if (i % 2)
			animalTab[i] = new Dog();
		else
			animalTab[i] = new Cat();
	}

	for (int i = 0; i < ANIMAL_NBR; i++) {
		std::cout << animalTab[i]->getType() << ": ";
		animalTab[i]->makeSound();
	}

	for (int i = 0; i < ANIMAL_NBR; i++) {
		std::cout << "Animal[" << i << "]" << std::endl;
		delete animalTab[i];
	}

	delete [] animalTab;
	return (0);
}