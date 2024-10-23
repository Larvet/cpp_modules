/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:35:37 by locharve          #+#    #+#             */
/*   Updated: 2024/10/23 08:33:52 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class	FlagTrap: public ClapTrap {
	public:
		FlagTrap(void);
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap& src);
		FlagTrap&	operator=(const FlagTrap& src);
		~FlagTrap(void);

		int	isAlive(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	highFivesGuys(void);
};

#endif