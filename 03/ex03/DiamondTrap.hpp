/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:37:58 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 11:30:12 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string	_name;
	//	std::string	ClapTrap::_name; ///
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		DiamondTrap& operator=(const DiamondTrap& src);
		~DiamondTrap(void);

		void	setClapTrapName(std::string name);
		std::string	getClapTrapName(void) const;
		std::string	getName(void) const;

		int	isAlive(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	whoAmI(void);
};

std::ostream&	operator<<(std::ostream& os, const DiamondTrap& src);

#endif