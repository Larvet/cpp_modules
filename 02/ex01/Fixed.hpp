/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:21:12 by locharve          #+#    #+#             */
/*   Updated: 2024/09/24 14:55:28 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

	Fixed(const int n);
	Fixed(const float f);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int	toInt(void) const;

//	std::ostream&	Fixed::operator<<(const std::ostream& os, const Fixed& src);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& src);

#endif