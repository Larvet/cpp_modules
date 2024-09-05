/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:27:51 by locharve          #+#    #+#             */
/*   Updated: 2024/09/05 18:23:15 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
#	define	PHONEBOOK_HPP

#	include	<iostream> ///
#	include <string> /////
#	include	<cstdlib> ////

class	PhoneBook
{
	private:
		Contact			contact[8];
		int				next_index;	
	public:
		// ask_param
		// addContact
		// displayPhoneBook
		// searchContact
		//
		std::string	askContact_param(int p);
		void		addContact(void);
		int			displayPhoneBook(void);
		Contact		getContact(int i);
		void		displayContact(Contact c);
		void		searchContact(void);
		void		wait_cmd(void);
};

#endif
