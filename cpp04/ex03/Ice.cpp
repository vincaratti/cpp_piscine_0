/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/05/01 12:25:19 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria( "ice" ){}

Ice::Ice( const Ice& other ): AMateria( "ice" ){ *this = other; }

Ice::~Ice( void ){}

Ice&	Ice::operator=( const Ice& other )
{
	this->_type = other._type;
	return ( *this );
}

AMateria*	Ice::clone( void ) const
{
	return ( new Ice( *this ) );
}

void		Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
