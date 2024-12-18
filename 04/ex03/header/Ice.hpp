/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:42:47 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 10:29:02 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice: public AMateria {
	public:
		Ice();
		Ice(const Ice& src);
		Ice&	operator=(const Ice& src);
		~Ice();

		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif