/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:21:12 by locharve          #+#    #+#             */
/*   Updated: 2024/09/17 15:04:24 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	nbr;
	static const int	bit_nbr = 8;
public:
	Fixed(void);
	Fixed(const Fixed & src);
	Fixed &operator=(const Fixed & src);
	~Fixed(void);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif