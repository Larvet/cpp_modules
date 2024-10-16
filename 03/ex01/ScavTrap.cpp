/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:32:53 by locharve          #+#    #+#             */
/*   Updated: 2024/10/16 11:54:02 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "------- ScavTrap string constructor called: " << getName() << std::endl;
} */

ScavTrap::ScavTrap(std::string name) {
	*this = ClapTrap(name, 100, 50, 20);
}

void	guardGate(void) {
	std::cout << getName() << " is guarding the Gate !" << std::endl;
}