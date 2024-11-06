/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:52:31 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 11:00:20 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class	AAnimal {
	protected:
		std::string	type;
	public:
		AAnimal(void);
		AAnimal(const AAnimal& src);
		AAnimal&	operator=(const AAnimal& src);
		virtual ~AAnimal(void);

		void	setType(std::string t);
		std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif