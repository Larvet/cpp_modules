/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:41:34 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 09:47:53 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal& src);
		Animal&	operator=(const Animal& src);
		virtual ~Animal(void);

		void	setType(std::string t);
		std::string	getType(void) const;

		virtual void	makeSound(void) const;
};

#endif