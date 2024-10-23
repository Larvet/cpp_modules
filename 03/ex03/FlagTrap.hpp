/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:35:37 by locharve          #+#    #+#             */
/*   Updated: 2024/10/23 11:54:07 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FRAG not FLAG

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class	FlagTrap: public virtual ClapTrap {
	public:
		FlagTrap(void);
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap& src);
		FlagTrap&	operator=(const FlagTrap& src);
		~FlagTrap(void);

		virtual int	isAlive(void);

		virtual void	attack(const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

		void	highFivesGuys(void);
};

#endif