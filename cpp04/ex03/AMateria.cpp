/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/05/01 11:22:10 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ): _type( "Null" ){}

AMateria::AMateria( std::string const& type ): _type( type ){}

AMateria::AMateria( const AMateria& other ): _type( other._type ){ *this = other; }

AMateria::~AMateria( void ){}

AMateria&	AMateria::operator=( const AMateria& other )
{
	this->_type = other._type;
	return ( *this );
}

void	AMateria::use( ICharacter& target )
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}

std::string const &	AMateria::getType( void ) const
{
	return ( this->_type );
}
