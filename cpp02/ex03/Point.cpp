/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:20:29 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/29 16:55:17 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x( 0 ), _y( 0 )
{
	//_x = Fixed( 0 );
	//_y = Fixed( 0 );
}

Point::Point( const Point& point ): _x( point._x ), _y( point._y ){}

Point::Point( const float f_x, const float f_y ): _x( f_x ), _y( f_y )
{
	//_x = Fixed( f_x );
	//_y = Fixed( f_y );
}

Point::~Point( void ){}

Point&	Point::operator=( const Point& point )
{
	//_x = point._x;
	//_y = point._y;
	*this = Point(point);
	return ( *this	);
}

const Fixed&	Point::get_x( void ) const
{
	return ( _x );
}

const Fixed&	Point::get_y( void ) const
{
	return ( _y );
}
