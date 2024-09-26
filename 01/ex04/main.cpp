/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:02 by locharve          #+#    #+#             */
/*   Updated: 2024/09/25 11:54:54 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PseudoSed.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		PseudoSed	psed(argc - 1, argv + 1);
		if (psed.readIfs())
			psed.writeOfs(psed.replaceStr(psed.getBuf()));
	}
	else
		std::cerr << "Invalid number of arguments." << std::endl;
	return (0);
}