/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:11:46 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 23:11:44 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){}

Weapon::Weapon( std::string type ): _type(type) {}

Weapon::Weapon( const Weapon& weapon): _type(weapon._type) {}

Weapon::~Weapon( void ){}

std::string	Weapon::getType( void )
{
	return (this->_type);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
