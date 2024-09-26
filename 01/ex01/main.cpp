/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:42:05 by locharve          #+#    #+#             */
/*   Updated: 2024/09/24 12:33:44 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

int	main(void)
{
	Zombie*	shirley;
	Zombie*	horde;
	int	i;

	shirley = newZombie("Shirley");
	if (shirley)
	{
		shirley->announce();
		delete(shirley);
	}
	
	randomChump("Dino");

	horde = zombieHorde(6, "Jean-Jacques");
	if (horde) {
		for (i = 0; i < 6; i++)
			horde[i].announce();
		delete [] horde;
	}

	return (0);
}
