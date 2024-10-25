/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:03:30 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 11:34:55 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	FragTrap	gortax("Gortax");
	std::cout << gortax << std::endl;

/*	FragTrap	unnamed;
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

	unnamed.highFivesGuys(); */

	DiamondTrap	kogromoth("Kogromoth");
	std::cout << kogromoth << std::endl;
	kogromoth.attack("Gortax");
	gortax.takeDamage(kogromoth.getAttackDamage());

	kogromoth.whoAmI();
	return (0);
}