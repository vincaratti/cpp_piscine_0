/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:56:23 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/29 12:53:31 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point
{
public:
		Point( void );
		Point( const Point& point );
		Point( const float f_x, const float f_y );
		~Point( void );
	Point&	operator=( const Point& point );

	const Fixed&	get_x( void ) const;
	const Fixed&	get_y( void ) const;
	
private:
	const Fixed	_x;
	const Fixed	_y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif
