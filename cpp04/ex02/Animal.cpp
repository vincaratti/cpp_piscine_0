/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/28 13:41:11 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type( "Void Soul" )
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal( const std::string& type): type( type )
{
	std::cout << "Animal Type Constructor Called" << std::endl;
}

Animal::Animal( const Animal& other )
{
	*this = other;
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal&	Animal::operator=( const Animal& other )
{
	this->type = other.type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	//std::cout << "The Soul Of An Animal Wheeps" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return ( this->type );
}
