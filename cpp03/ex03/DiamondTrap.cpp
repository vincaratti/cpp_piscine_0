
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/22 11:54:40 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap( "John_Doe_clap_name" )
{
	this->_name = "John_Doe";
	this->_hit_p = FragTrap::_hit_p;
	this->_energy_p = ScavTrap::_energy_p;
	this->_attack_d = FragTrap::_attack_d;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap( name + "_clap_name" )
{
	this->_name = name;
	this->_hit_p = FragTrap::_hit_p;
	this->_energy_p = ScavTrap::_energy_p;
	this->_attack_d = FragTrap::_attack_d;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout <<	"DIamondTrap Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ): ClapTrap( other._name + "_clap_name" ),
							ScavTrap( other._name ), FragTrap( other._name )
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{	
	this->_name = other._name;
	this->_hit_p = FragTrap::_hit_p;
	this->_energy_p = ScavTrap::_energy_p;
	this->_attack_d = FragTrap::_attack_d;
	return ( *this );
}

void	DiamondTrap::whoAmI( void )
{
	std::cout	<< "DiamondTrap name: " << this->_name << std::endl
			<< "ClapTrap name: " << ClapTrap::_name << std::endl;
		
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack( target );
}
