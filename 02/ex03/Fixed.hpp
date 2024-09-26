/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:21:12 by locharve          #+#    #+#             */
/*   Updated: 2024/09/26 16:38:38 by locharve         ###   ########.fr       */
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
	
		// 02
		// operators
	
		bool	operator>(const Fixed& to_cmp);
		bool	operator<(const Fixed& to_cmp);
		bool	operator>=(const Fixed& to_cmp);
		bool	operator<=(const Fixed& to_cmp);
		bool	operator==(const Fixed& to_cmp);
		bool	operator!=(const Fixed& to_cmp);
	
		// arithmetic
		Fixed	operator+(const Fixed& to_clc);
		Fixed	operator-(const Fixed& to_clc);
		Fixed	operator*(const Fixed& to_clc);
		Fixed	operator/(const Fixed& to_clc);
	
		// incrementations
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
	
		// static member fonctions
		static Fixed&	min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& src);

#endif