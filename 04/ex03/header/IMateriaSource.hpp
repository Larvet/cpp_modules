/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:59:49 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 11:51:43 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

# include <iostream>

class	AMateria;

class	IMateriaSource {
	public:
		virtual	~IMateriaSource() {}
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif