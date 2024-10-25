/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:35:37 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 10:30:16 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		FragTrap&	operator=(const FragTrap& src);
		~FragTrap(void);

		int	isAlive(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	highFivesGuys(void);
};

#endif