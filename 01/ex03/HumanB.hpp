/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:24:36 by locharve          #+#    #+#             */
/*   Updated: 2024/09/13 17:17:49 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*	w;
	public:
		HumanB(std::string name);
		~HumanB(void);

		std::string	getName(void);
		void	setName(std::string name);
		std::string getWeaponType(void);
		void	setWeapon(Weapon & w);
		void	attack(void);
};

#endif