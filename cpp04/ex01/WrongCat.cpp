/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/25 14:39:30 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal( "WrongCat" )
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ): WrongAnimal( other.type )
{
	*this = other;
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& other )
{
	type = other.type;
	return ( *this );
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "wrong mow" << std::endl;
}
