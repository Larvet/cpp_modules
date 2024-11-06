/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:47:56 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 09:19:18 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define BRAIN_LIMIT 100

class	Brain {
	private:
		std::string	ideas[BRAIN_LIMIT];
	public:
		Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& src);
		~Brain();

		void	setIdea(std::string idea);
		std::string*	getIdeas() const;

		void	printIdeas() const;
};

#endif