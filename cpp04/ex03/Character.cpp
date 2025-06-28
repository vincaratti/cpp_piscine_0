/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/05/01 14:13:59 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ): name( "Joe" )
{
	for ( int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character( std::string const name ): name( name )
{
	for ( int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character( const Character& other ): name( other.name )
{
	for ( int i = 0; i < 4; i++)
		inventory[i] = 0;
	*this = other;
}
 
Character::~Character( void )
{
	for ( int i = 0; i < 4; i++)
		delete inventory[i];
}

Character&	Character::operator=( const Character& other )
{
	this->name = other.name;
	for ( int i = 0; i < 4; i++ )
	{
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
	}
	return ( *this );
}

std::string const&	Character::getName( void ) const
{
	return ( name );
}

void	Character::equip( AMateria* m )
{
	if ( !m )
		return;
	for ( int i = 0; i < 4; i++ )
	{
		if (!inventory[i])
		{
			for ( int j = 0; j < 4; j++ )
			{
				if ( inventory[j] == m )
				{
					inventory[i] = m->clone();
					return;
				}
			}
			inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int idx )
{
	if ( idx < 0 || idx > 3 )
		return ;
	inventory[idx] = 0;
}

void	Character::use( int idx, ICharacter& target )
{
	if ( idx < 0 || idx > 3 )
		return ;
	if (!inventory[idx])
		return;
	std::cout << name << ": ";
	inventory[idx]->use( target );
}
