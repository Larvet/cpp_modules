/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:40:54 by locharve          #+#    #+#             */
/*   Updated: 2024/11/02 12:10:14 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	bob("Bob");
	ClapTrap	unnamed;

	std::cout << std::endl;
	unnamed.beRepaired(1);
	for (int i = 0; i < 11; i++) {
		bob.attack(unnamed.getName());
		unnamed.takeDamage(bob.getAttackDamage());
		std::cout << bob << std::endl << unnamed << std::endl << std::endl;
	}
	bob.beRepaired(1);

	ClapTrap	bob_copy(bob);
	ClapTrap	bob_copy_copy = bob_copy;
	return (0);
}