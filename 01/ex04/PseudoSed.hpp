/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PseudoSed.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:31:30 by locharve          #+#    #+#             */
/*   Updated: 2024/09/25 11:51:12 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSEUDOSED_HPP
# define PSEUDOSED_HPP

# include <iostream>
# include <fstream>
# include <sstream>

# define ERR_ALLOC "Memory allocation failed at: "

typedef enum e_param_id
{
	filename_,
	to_find_,
	to_replace_
}	t_param_id;

class PseudoSed
{
	private:
		std::string*	param;
		std::string*	buf;
		std::ifstream	ifs;
		std::ofstream	ofs;
	public:
		PseudoSed(int ac, char** av);
		~PseudoSed(void);

		std::string	getParam(t_param_id p);
		std::string	getBuf(void);

		std::string*	readIfs(void);
		std::string	replaceStr(std::string str);
		void	writeOfs(std::string str);
};

#endif