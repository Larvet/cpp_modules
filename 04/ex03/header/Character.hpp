/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:07:42 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 10:59:16 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

# define POCKETS_NBR 4

class	Character: public ICharacter {
	private:
		std::string		_name;
		AMateria**		_inventory;
	public:
		Character();
		Character(const Character& src);
		Character&	operator=(const Character& src);
		~Character();

		Character(std::string name);
		void	setName(std::string name);
		void	setInventory();
		void	setInventory(AMateria** inv);
		void	cleanInventory();

		AMateria**	getInventory() const;
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

};

#endif