/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:23:50 by locharve          #+#    #+#             */
/*   Updated: 2024/09/19 13:56:28 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

std::string	Zombie::get_name(void)
{
	return (this->_name);
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << " died begging for brains..."
		<< std::endl;
}
