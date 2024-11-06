/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:05:14 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 11:00:35 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat: public AAnimal {
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