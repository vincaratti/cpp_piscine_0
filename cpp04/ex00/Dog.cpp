/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 15:13:29 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal( "Dog" )
{
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog( const Dog& other ): Animal( other.type )
{
	*this = other;
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog&	Dog::operator=( const Dog& other )
{
	type = other.type;
	return ( *this );
}
