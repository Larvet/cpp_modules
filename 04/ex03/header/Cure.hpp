/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:56:05 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 10:28:37 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure& src);
		Cure&	operator=(const Cure& src);
		~Cure();

		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif