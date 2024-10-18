/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:38:48 by locharve          #+#    #+#             */
/*   Updated: 2024/10/16 11:54:27 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	john("John");
	ScavTrap	unnamed;
	ScavTrap	billy = unnamed;
//	ClapTrap	clap("Clap");

	john.attack(unnamed.getName());
	return (0);
}