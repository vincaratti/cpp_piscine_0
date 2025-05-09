/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:51:12 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 13:31:54 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	_hit_p = 100;
	_energy_p = 50;
	_attack_d = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap( name )
{
	_hit_p = 100;
	_energy_p = 50;
	_attack_d = 20;
	std::cout << "ScavTrap name constructor called" <<  std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ): ClapTrap( other._name )
{
	*this = other;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other )
{
	_name = other._name;
	_hit_p = other._hit_p;
	_energy_p = other._energy_p;
	_attack_d = other._attack_d;
	_guardGateMode = other._guardGateMode;
	return ( *this );
}

void	ScavTrap::guardGate( void )
{
	_guardGateMode = 1;
	std::cout<< "ScavTrap now in Gate-keeper mode.\n";		
}

void	ScavTrap::attack( const std::string& target )
{
	if ( _energy_p <= 0  || _hit_p <= 0 )
	{
		std::cout <<	"ScavTrap " << _name << " tried to attack " << target <<
				" . Unfortunatly he cannot" <<
				std::endl;
		return ;
	}
	std::cout <<	"ScavTrap " << _name << " attacks " << target <<
			", causing " << _attack_d << " points of damage!" <<
			std::endl;
	_energy_p--;
}
