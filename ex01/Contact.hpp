/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:31:04 by locharve          #+#    #+#             */
/*   Updated: 2024/09/03 16:31:14 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONTACT_HPP
#	define	CONTACT_HPP

#	include	<iostream> //
#	include	<string> ////

class	Contact
{
	public:
		std::string	first_name,
					last_name,
					nickname,
					phone_number,
					darkest_secret;
	private:
		std::string	*get_param_addr(std::string str);
		void	set_param(std::string str, std::string *addr);
		
};

#endif
