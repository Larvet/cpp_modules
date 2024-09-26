/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:38:18 by locharve          #+#    #+#             */
/*   Updated: 2024/09/24 12:24:07 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	new_z;

	new_z = new(Zombie);
	if (!new_z)
		std::cerr << ERR_ALLOC << "newZombie()" << std::endl;
	else
		new_z->set_name(name);
	return (new_z);
}
