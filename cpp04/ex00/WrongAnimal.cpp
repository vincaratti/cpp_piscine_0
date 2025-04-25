/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/25 14:36:26 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type( "Void Soul" )
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string& type): type( type )
{
	std::cout << "WrongAnimal Type Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	*this = other;
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other )
{
	this->type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "The Soul Of A WrongAnimal Wheeps" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return ( this->type );
}
