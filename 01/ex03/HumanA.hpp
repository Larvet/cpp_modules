/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:05:04 by locharve          #+#    #+#             */
/*   Updated: 2024/09/13 17:17:44 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon &	w;
	public:
		HumanA(std::string name, Weapon & w);
		~HumanA(void);

		std::string	getName(void);
		void	setName(std::string name);
		std::string getWeaponType(void);
		void	attack(void);
};

#endif