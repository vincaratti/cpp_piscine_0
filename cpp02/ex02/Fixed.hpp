/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:27:50 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/28 21:56:55 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed
{
public:
		Fixed( void );
		Fixed( const Fixed& fixed );
		~Fixed( void );
		Fixed( int const n);
		Fixed( float const f);
		
		Fixed&	operator=(const Fixed& fixed);

		int	operator>(const Fixed& other);
		int	operator<(const Fixed& other);
		int	operator>=(const Fixed& other);
		int	operator<=(const Fixed& other);
		int	operator==(const Fixed& other);
		int	operator!=(const Fixed& other);

		Fixed	operator+(const Fixed& other);
		Fixed	operator-(const Fixed& other);
		Fixed	operator*(const Fixed& other);
		Fixed	operator/(const Fixed& other);

		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int	toInt( void ) const;

	static Fixed& min( Fixed& left, Fixed& right );
	static const Fixed& min( const Fixed& left, const Fixed& right );
	static Fixed& max( Fixed& left, Fixed& right );
	static const Fixed& max( const Fixed& left, const Fixed& right );

private:
	int			_fpnv;
	static const int	_nb_fb;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);
#endif
