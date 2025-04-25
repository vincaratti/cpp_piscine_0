/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:18:04 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/23 14:40:51 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	_hit_p = 100;
	_energy_p = 100;
	_attack_d = 30;
	std::cout<< "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap( name )
{
	_hit_p = 100;
	_energy_p = 100;
	_attack_d = 30;
	std::cout<< "FragTrap name constructor called" << std::endl;	
}

FragTrap::FragTrap( const FragTrap& other ): ClapTrap( other._name )
{
	*this = other;
	std::cout<< "FragTrap copy constructor called" << std::endl;	
}

FragTrap::~FragTrap( void )
{
	std::cout<< "FragTrap destructor called" << std::endl;	
}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	_name = other._name;
	_hit_p = other._hit_p;
	_energy_p = other._energy_p;
	_attack_d = other._attack_d;
	return ( *this );
}

void	FragTrap::highFivesGuys( void )
{
	std::cout<< "FragTrap is high-fiving the chaps\n";
}
