/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:39:08 by locharve          #+#    #+#             */
/*   Updated: 2024/09/13 14:42:39 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	new_z;

	new_z.set_name(name);
	new_z.announce();
}
