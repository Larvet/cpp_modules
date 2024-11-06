/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:49:37 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 11:55:19 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

int	main() {
	Ice	ice1;

	std::cout << ice1.getType() << std::endl;

	AMateria*	ice2 = new Ice();
	std::cout << ice2->getType() << std::endl;
	delete ice2;
	return (0);
}