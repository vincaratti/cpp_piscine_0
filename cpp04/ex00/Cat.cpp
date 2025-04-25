/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 15:15:07 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal( "Cat" )
{
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat( const Cat& other ): Animal( other.type )
{
	*this = other;
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat&	Cat::operator=( const Cat& other )
{
	type = other.type;
	return ( *this );
}
