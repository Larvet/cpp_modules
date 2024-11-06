/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:05:14 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 10:33:02 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal {
	private:
		Brain*	brain;
	public:
		Cat(void);
		Cat(const Cat& src);
		Cat&	operator=(const Cat& src);
		~Cat(void);

		virtual void	makeSound(void) const;

		Brain*	getBrain() const;
};

#endif