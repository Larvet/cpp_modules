/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:05:14 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 12:08:32 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat& src);
		Cat&	operator=(const Cat& src);
		~Cat(void);

		void	makeSound(void) const;
}

#endif