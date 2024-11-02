/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:03:30 by locharve          #+#    #+#             */
/*   Updated: 2024/11/02 12:27:25 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	FragTrap	gortax("Gortax");
	std::cout << gortax << std::endl;

	FragTrap	unnamed;
	std::cout << unnamed << std::endl;

	FragTrap	ultramorth(gortax);
	std::cout << ultramorth << std::endl;

	FragTrap	oktrombo("Oktrombo");
	std::cout << oktrombo << std::endl;

	ultramorth.attack(oktrombo.getName());
	std::cout << ultramorth << std::endl;

	oktrombo.takeDamage(ultramorth.getAttackDamage());
	std::cout << oktrombo << std::endl;

	oktrombo.beRepaired(1);
	std::cout << oktrombo << std::endl;

	unnamed.highFivesGuys();

	ClapTrap	ogrog("Ogrog");
	ScavTrap	kogromoth("Kogromoth");

	ogrog.attack(oktrombo.getName());
	std::cout << ogrog << std::endl;
	oktrombo.takeDamage(ogrog.getAttackDamage());
	std::cout << oktrombo << std::endl;

	kogromoth.beRepaired(1);
	std::cout << kogromoth << std::endl;
	kogromoth.guardGate();

	return (0);
}