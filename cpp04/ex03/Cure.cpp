/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/05/01 12:25:06 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria( "cure" ){}

Cure::Cure( const Cure& other ): AMateria( "cure" ){ *this = other; }

Cure::~Cure( void ){}

Cure& Cure::operator=( const Cure& other )
{
	this->_type = other._type;
	return ( *this );
}

AMateria*	Cure::clone( void ) const
{
	return ( new Cure( *this ) );
}

void		Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
