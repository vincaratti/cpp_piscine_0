/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:51:12 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/23 14:37:34 by vcaratti         ###   ########.fr       */
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
