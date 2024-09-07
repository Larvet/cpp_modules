/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:18:23 by locharve          #+#    #+#             */
/*   Updated: 2024/09/07 18:33:57 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"
#include	"PhoneBook.hpp"

int	main(void)
{
	PhoneBook	pb;

	// set PhoneBook to 0
	pb.initPhoneBook();
	pb.wait_cmd();
	return (0);
}
