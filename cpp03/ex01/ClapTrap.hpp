/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:13:08 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/29 21:03:14 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

class ClapTrap
{
public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& claptrap );
		~ClapTrap( void );
	ClapTrap&	operator=( const ClapTrap& other );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount);
	void	beRepaired( unsigned int amount);

private:
	std::string	_name;
	unsigned int	_hit_p;
	unsigned int	_energy_p;
	unsigned int	_attack_d;
};

#endif
