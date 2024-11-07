/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:11:48 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 10:23:50 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	ICharacter;

class	AMateria {
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const AMateria& src);
		AMateria&	operator=(const AMateria& src);
		virtual	~AMateria();
		
		AMateria(std::string const & type);

		void	setType(std::string type);
		
		std::string const & getType() const;

		virtual	AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif