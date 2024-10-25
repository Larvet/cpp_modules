/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:56:14 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 12:08:51 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog& src);
		Dog&	operator=(const Dog& src);
		~Dog(void);
		
		void	makeSound(void) const;
}

#endif