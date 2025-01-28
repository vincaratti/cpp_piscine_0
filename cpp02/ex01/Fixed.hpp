/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:27:50 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/28 18:34:45 by vcaratti         ###   ########.fr       */
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
		
		Fixed& operator=(const Fixed& fixed);

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int	toInt( void ) const;

private:
	int			_fpnv;
	static const int	_nb_fb;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);
#endif
