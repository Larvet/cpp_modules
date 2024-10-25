/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:35:37 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 10:34:58 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public virtual ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		FragTrap&	operator=(const FragTrap& src);
		~FragTrap(void);

		virtual int	isAlive(void);

		virtual void	attack(const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

		void	highFivesGuys(void);
};

#endif