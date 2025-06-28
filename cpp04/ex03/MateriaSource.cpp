/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/05/01 12:38:36 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for ( int i = 0; i < 4; i++ )
		knowledge[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
	for ( int i = 0; i < 4; i++ )
		knowledge[i] = 0;
	*this = other;
}

MateriaSource::~MateriaSource( void )
{
	for ( int i = 0; i < 4; i++ )
		delete knowledge[i];
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other )
{	
	for ( int i = 0; i < 4; i++ )
	{
		if ( other.knowledge[i] )
			knowledge[i] = other.knowledge[i]->clone();
	}
	return ( *this );
}

void	MateriaSource::learnMateria( AMateria* m )
{
	int	i;
	for ( i = 0; i < 4; i++ )
	{
		if ( knowledge[i] )
		{
			if ( knowledge[i]->getType() == m->getType() )
				return ;
		}
		else
			break;
	}
	if ( i < 4 )
		knowledge[i] = m;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for ( int i = 0; i < 4; i++ )
	{
		if ( knowledge[i] )
		{
			if ( knowledge[i]->getType() == type )
				return ( knowledge[i]->clone() );
		}
	}
	return ( 0 );
}
