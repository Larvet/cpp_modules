/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:03:30 by locharve          #+#    #+#             */
/*   Updated: 2024/11/02 12:58:39 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// change beRepaired

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

	ClapTrap	morkoboth("Morkoboth");
	morkoboth.attack(kogromoth.getName());
	std::cout << morkoboth << std::endl;
	kogromoth.takeDamage(morkoboth.getAttackDamage());
	std::cout << kogromoth << std::endl;

	kogromoth.beRepaired(1);
	kogromoth.highFivesGuys();
	kogromoth.attack(morkoboth.getName());
	std::cout << kogromoth << std::endl;
	morkoboth.takeDamage(kogromoth.getAttackDamage());
	std::cout << morkoboth << std::endl;
	return (0);
}