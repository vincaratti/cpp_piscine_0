/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:27:50 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/28 18:38:05 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed
{
public:
		Fixed( void );
		Fixed (Fixed &fixed);
		Fixed& operator=(const Fixed& other);
		~Fixed( void );
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
private:
	int			_fpnv;
	static const int	_nb_fb;
};

#endif
