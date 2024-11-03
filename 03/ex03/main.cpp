/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:03:30 by locharve          #+#    #+#             */
/*   Updated: 2024/11/03 09:11:08 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	FragTrap	gortax("Gortax");
	std::cout << gortax << std::endl << std::endl;

	DiamondTrap	kogromoth("Kogromoth");
	std::cout << kogromoth << std::endl;
	kogromoth.attack("Gortax");
	gortax.takeDamage(kogromoth.getAttackDamage());
	std::cout << gortax << std::endl << std::endl;

	kogromoth.whoAmI();
	std::cout << std::endl;
	
	ClapTrap	morkoboth("Morkoboth");
	morkoboth.attack(kogromoth.getName());
	std::cout << morkoboth << std::endl;
	kogromoth.takeDamage(morkoboth.getAttackDamage());
	std::cout << kogromoth << std::endl << std::endl;

	kogromoth.beRepaired(1);
	kogromoth.highFivesGuys();
	kogromoth.attack(morkoboth.getName());
	std::cout << kogromoth << std::endl;
	morkoboth.takeDamage(kogromoth.getAttackDamage());
	std::cout << morkoboth << std::endl;

	DiamondTrap	uberkrondo(kogromoth);
	std::cout << uberkrondo << std::endl << std::endl;

	return (0);
}