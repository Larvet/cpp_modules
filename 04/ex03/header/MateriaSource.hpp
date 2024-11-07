/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:02:13 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 12:15:28 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define STOCK_SIZE 4

class	MateriaSource: public IMateriaSource {
	private:
		AMateria**	_stock;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource&	operator=(const MateriaSource& src);
		~MateriaSource();

		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

		void	setStock();
		void	setStock(AMateria** stock);
		AMateria**	getStock() const;
		void	cleanStock();
};

#endif