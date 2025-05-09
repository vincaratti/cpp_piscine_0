/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:01:46 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/23 14:33:08 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	tocopy1("joey");
	ClapTrap	joey(tocopy1);
	ScavTrap	tocopy2("joseph");
	ScavTrap	joseph = tocopy2;

	joey.attack("joseph");
	joseph.takeDamage(5);
	joseph.attack("joey");
	joey.takeDamage(5);
	joey.beRepaired(2);
	joseph.guardGate();
	joey.attack("joseph");
	joseph.takeDamage(5);
	joseph.attack("joey");
	joey.takeDamage(5);
	joseph.attack("joey");
	joey.takeDamage(5);	
}
