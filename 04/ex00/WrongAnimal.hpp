/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:22:36 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 12:39:15 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class	WrongAnimal { // hérite d'Animal ?
	protected:
		std::string type;
		
		void	makeSound(void) const;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal&	operator=(const WrongAnimal& src);
		~WrongAnimal(void);

		void	setType(std::string t);
		std::string	getType(void) const;
}

#endif