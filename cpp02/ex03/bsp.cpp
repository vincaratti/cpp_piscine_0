/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:05:06 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/29 16:24:38 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	get_sign(Point const point, Point const a, Point const b)
{
	float	ret ;
	ret =  ( ( ( point.get_x() - b.get_x() ).toFloat() * ( a.get_y() - b.get_y() ).toFloat() ) -
		( ( a.get_x() - b.get_x() ).toFloat() * ( point.get_y() - b.get_y() ).toFloat() ) );
	//std::cout << "get_sign: (" << ( ( point.get_x() - b.get_x() ) * ( a.get_y() - b.get_y())).toFloat() <<
	//	"; "<<  (( ( a.get_x() - b.get_x() ) * ( point.get_y() - b.get_y() ) )).toFloat()
	//	<< " ) ;ret: " << ret << std::endl;
	return ( ret );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	bool	has_neg, has_pos;

	//std::cout << "point: " << point.get_x() <<"; " << point.get_y() << std::endl <<
	//"triangle:{ " << a.get_x() << " , " << a.get_y() << " } ; { " <<
	//	b.get_x() << " , " << b.get_y() << " } ; { " <<
	//	c.get_x() << " , " << c.get_y() << " } ;" << std::endl;
	const float dist_1 = get_sign( point, a, b );
	const float dist_2 = get_sign( point, b, c );
	const float dist_3 = get_sign( point, c, a );

	const float zero = 0;

	//std::cout << "1: " << dist_1 << ";2: " << dist_2 << ";3: " << dist_3 << std::endl;
	has_neg = ( dist_1 <= zero ) || ( dist_2 <= zero ) || ( dist_3 <= zero );
	has_pos = ( dist_1 >= zero ) || ( dist_2 >= zero ) || ( dist_3 >= zero );
	//std::cout << "has_neg: " << has_neg << "; has_pos: " << has_pos << std::endl;

	return ( ! ( has_neg && has_pos ) );
}
