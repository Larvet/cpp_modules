/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:03:30 by locharve          #+#    #+#             */
/*   Updated: 2024/10/23 08:31:58 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int	main(void) {
	FlagTrap	gortax("Gortax");
	std::cout << gortax << std::endl;

	FlagTrap	unnamed;
	std::cout << unnamed << std::endl;

	FlagTrap	ultramorth(gortax);
	std::cout << ultramorth << std::endl;

	FlagTrap	oktrombo("Oktrombo");
	std::cout << oktrombo << std::endl;

	ultramorth.attack(oktrombo.getName());
	std::cout << ultramorth << std::endl;

	oktrombo.takeDamage(ultramorth.getAttackDamage());
	std::cout << oktrombo << std::endl;

	oktrombo.beRepaired(1);
	std::cout << oktrombo << std::endl;

	unnamed.highFivesGuys();
	return (0);
}