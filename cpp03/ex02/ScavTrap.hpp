/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:35:36 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/23 14:35:58 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& other );
		~ScavTrap( void );
	ScavTrap&	operator=( const ScavTrap& other);
	void	guardGate( void );
private:
	bool	_guardGateMode;
};

#endif
