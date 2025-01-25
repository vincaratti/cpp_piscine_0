/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:27:45 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 23:06:23 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ): _weapon(NULL) {}

HumanB::HumanB( std::string name): _weapon(NULL), _name(name) {}

HumanB::HumanB( const HumanB& human ): _weapon(human._weapon), _name(human._name) {}

HumanB::~HumanB( void ){}

void	HumanB::attack( void )
{
	std::cout <<	this->_name <<
			" attacks with their " <<
			this->_weapon->getType() <<
			std::endl;
}

void	HumanB::setWeapon( Weapon& Weapon)
{
	this->_weapon = &Weapon;
}
