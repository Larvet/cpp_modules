/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:56:14 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 10:33:05 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal {
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(const Dog& src);
		Dog&	operator=(const Dog& src);
		~Dog(void);
		
		virtual void	makeSound(void) const;

	//	void	setBrain(Brain& src);
		Brain*	getBrain() const;
};

#endif