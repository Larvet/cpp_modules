/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:31:04 by locharve          #+#    #+#             */
/*   Updated: 2024/09/05 18:14:12 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONTACT_HPP
#	define	CONTACT_HPP

#	include	<iostream> //
#	include	<string> ////
#	include	<cstdlib>

typedef enum e_param_id
{
	first_name,
	last_name,
	nickname,
	phone_nbr,
	darkest_secret
}	t_param_id;

class	Contact
{
	private:
		std::string	param[5];
	public:
		std::string	get_param(t_param_id id);
		void	set_param(t_param_id id, std::string str);
		void	display_short(void);
};

#endif
