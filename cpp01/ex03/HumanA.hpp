/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:17:08 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 23:07:10 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA
{
public:
		HumanA( void );
		HumanA( std::string name, Weapon& weapon );
		HumanA( const HumanA& human);
		~HumanA( void );
	void	attack( void );
private:
	Weapon& 	_weapon;
	std::string	_name;
};

#endif
