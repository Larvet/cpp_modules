/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:43:24 by locharve          #+#    #+#             */
/*   Updated: 2024/09/24 12:28:14 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie*	newZH;
	int	i;

	newZH = new Zombie[N];
	if (!newZH)
		std::cerr << "Memory allocation failed." << std::endl;
	else
		for (i = 0; i < N; i++)
			newZH[i].set_name(name);
	return (newZH);
}