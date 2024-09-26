/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:42:05 by locharve          #+#    #+#             */
/*   Updated: 2024/09/24 12:23:53 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

int	main(void)
{
	Zombie*	shirley;
	std::string	str;

	shirley = newZombie("Shirley");
	if (shirley)
	{
		shirley->announce();
		delete(shirley);
	}
	
	randomChump("Dino");

	return (0);
}
