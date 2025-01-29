/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:11:05 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/29 16:38:10 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include "Point.hpp"

int main( void )
{
	const Point c1( 0, 0 );
	const Point c2( 10, 10 ); // works with floats as well
	const Point c3( 10, 0 );

	std::cout <<	"Triangle: { " <<
			c1.get_x().toInt() << ", " << c1.get_y().toInt() << " } { " <<
			c2.get_x().toInt() << ", " << c2.get_y().toInt() << " } { " <<
			c3.get_x().toInt() << ", " << c3.get_y().toInt() << " }" <<
			std::endl;
			
	const Point point1( 5, 2 ); // should be in rectangle ( == 1)
	std::cout <<	"Point ( " << 
			point1.get_x().toInt() << ", " << point1.get_x().toInt() <<
			" ) is in: " << bsp( c1, c2, c3, point1) <<
			std::endl;
	
	const Point point2( 15, 2 ); // should be outside rectangle ( == 0)
	std::cout <<	"Point ( " << 
			point2.get_x().toInt() << ", " << point2.get_x().toInt() <<
			" ) is in: " << bsp( c1, c2, c3, point2) <<
			std::endl;
	
	const Point point3( 5, 5 ); // should be on the edge of the rectangle ( == 0)
	std::cout <<	"Point ( " << 
			point3.get_x().toInt() << ", " << point3.get_x().toInt() <<
			" ) is in: " << bsp( c1, c2, c3, point3) <<
			std::endl;

	const Point point4( 0, 0 ); // should be on the edge of the rectangle ( == 0)
	std::cout <<	"Point ( " << 
			point4.get_x().toInt() << ", " << point4.get_x().toInt() <<
			" ) is in: " << bsp( c1, c2, c3, point4) <<
			std::endl;

	const Point point5( -10, -50 ); // should be outside rectangle ( == 0)
	std::cout <<	"Point ( " << 
			point5.get_x().toInt() << ", " << point5.get_x().toInt() <<
			" ) is in: " << bsp( c1, c2, c3, point5) <<
			std::endl;
	return ( 0 );
}
