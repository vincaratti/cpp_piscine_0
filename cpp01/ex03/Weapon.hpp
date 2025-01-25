/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:58:51 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 23:10:18 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <string>

class Weapon
{
public:
		Weapon( void );
		Weapon( std::string type );
		Weapon( const Weapon& weapon );
		~Weapon( void );
	std::string	getType( void );
	void		setType( std::string type );
private:
	std::string	_type;
};

#endif
