/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:26:55 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 23:05:12 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB
{
public:
		HumanB( void );
		HumanB( std::string name);
		HumanB( const HumanB& human);
		~HumanB( void );
	void	attack( void );
	void	setWeapon( Weapon& weapon );
private:
	Weapon* 	_weapon;
	std::string	_name;
};

#endif
