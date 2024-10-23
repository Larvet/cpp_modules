/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:10:31 by locharve          #+#    #+#             */
/*   Updated: 2024/10/23 11:54:09 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {
	protected:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& src);
		ClapTrap&	operator=(const ClapTrap& src);
		~ClapTrap();

		ClapTrap(std::string name);

		std::string	getName(void) const;
		int	getHitPoints(void) const;
		int	getEnergyPoints(void) const;
		int	getAttackDamage(void) const;

		virtual int	isAlive(void);

		void	setName(std::string name);
		void	setHitPoints(int n);
		void	setEnergyPoints(int n);
		void	setAttackDamage(int n);

		virtual void	attack(const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream& os, const ClapTrap& src);

#endif