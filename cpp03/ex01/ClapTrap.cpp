/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 13:20:55 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ):_name("John Doe"), _hit_p(10), _energy_p(10), _attack_d(0)
{
	std::cout <<	"ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ):_name(name), _hit_p(10), _energy_p(10), _attack_d(0)
{
	std::cout <<	"ClapTrap Name Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& claptrap )
{
	*this = claptrap;
	std::cout <<	"ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout <<	"ClapTrap Destructor Called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	_name = other._name;
	_hit_p = other._hit_p;
	_energy_p = other._energy_p;
	_attack_d = other._energy_p;
	return (*this);
}

void	ClapTrap::attack( const std::string& target )
{
	if ( _energy_p <= 0  || _hit_p <= 0 )
	{
		std::cout <<	"ClapTrap " << _name << " tried to attack " << target <<
				" . Unfortunatly he cannot" <<
				std::endl;
		return ;
	}
	std::cout <<	"ClapTrap " << _name << " attacks " << target <<
			", causing " << _attack_d << " points of damage!" <<
			std::endl;
	_energy_p--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{	
	if ( _hit_p <= 0 )
	{
		std::cout <<	"ClapTrap " << _name << " can't take amy damage, he is dead" <<
				std::endl;
		return ;
	}
	std::cout <<	"ClapTrap " << _name << " takes a hit of " << amount <<
			" Hit Points!" <<
			std::endl;
	if ( _hit_p < amount )
		_hit_p = 0;
	else
		_hit_p -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( _energy_p <= 0)
	{
		std::cout <<	"ClapTrap " << _name <<
				" can't repair himself, he doesn't have anough energy_points" <<
				std::endl;
		return ;
	}
	std::cout <<	"ClapTrap " << _name << " repairs itself for " << amount <<
			" Hit Points!" <<
			std::endl;
	_hit_p += amount;
	_energy_p--;
}
