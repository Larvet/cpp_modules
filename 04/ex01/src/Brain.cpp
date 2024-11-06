/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:50:20 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 09:21:10 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "------- Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& src) {
	*this = src;
	std::cout << "------- Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& src) {
	std::string*	ideatab = src.getIdeas();

	for (int i = 0; !ideatab[i].empty() && i < BRAIN_LIMIT; i++)
		ideas[i] = ideatab[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "------- Brain destructor called" << std::endl;
}

void	Brain::setIdea(std::string idea) {
	int	i = 0;

	while (!ideas[i].empty() && i < BRAIN_LIMIT)
		i++;
	i -= i == BRAIN_LIMIT;
	ideas[i] = idea;
}

std::string*	Brain::getIdeas() const {
	return ((std::string *)ideas);
}

void	Brain::printIdeas() const {
	for (int i = 0; !ideas[i].empty() && i < BRAIN_LIMIT; i++)
		std::cout << ideas[i] << std::endl;
}
