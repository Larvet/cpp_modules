/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:39:08 by locharve          #+#    #+#             */
/*   Updated: 2024/09/10 15:27:01 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	new_z;

	new_z.set_name(name);
	new_z.announce();
}
