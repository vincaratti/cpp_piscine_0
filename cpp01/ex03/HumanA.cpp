/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:21:53 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 23:08:09 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//HumanA::HumanA( void ){} //cant: cannot initialise reference (weapon) to null

HumanA::HumanA( std::string name, Weapon& weapon ): _weapon(weapon), _name(name) {}

HumanA::HumanA( const HumanA& human ): _weapon(human._weapon), _name(human._name) {}

HumanA::~HumanA( void ){}

void	HumanA::attack( void )
{
	std::cout <<	this->_name <<
			" attacks with their " <<
			this->_weapon.getType() <<
			std::endl;
}
