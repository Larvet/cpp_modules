/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:22:36 by locharve          #+#    #+#             */
/*   Updated: 2024/11/05 12:46:52 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal {
	protected:
		std::string type;
		
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal&	operator=(const WrongAnimal& src);
		virtual ~WrongAnimal(void);

		void	setType(std::string t);
		std::string	getType(void) const;

		void	makeSound(void) const;
};

#endif