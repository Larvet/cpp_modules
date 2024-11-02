/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:38:48 by locharve          #+#    #+#             */
/*   Updated: 2024/11/02 12:18:52 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	john("John");
	std::cout << john << std::endl;

	ScavTrap	unnamed;
	std::cout << unnamed << std::endl;

	ScavTrap	billy(unnamed);
	std::cout << billy << std::endl;

	ClapTrap	clap("Clap");

	john.attack(unnamed.getName());
	std::cout << john << std::endl;
	unnamed.takeDamage(john.getAttackDamage());
	std::cout << unnamed << std::endl;
	unnamed.beRepaired(1);
	std::cout << unnamed << std::endl;

	billy.guardGate();
	billy.attack(clap.getName());
	std::cout << billy << std::endl;
	clap.takeDamage(billy.getAttackDamage());
	std::cout << clap << std::endl;
	return (0);
}