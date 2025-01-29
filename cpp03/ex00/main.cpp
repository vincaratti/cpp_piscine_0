/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:01:46 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/29 20:26:07 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	tocopy1("joey");
	ClapTrap	joey(tocopy1);
	ClapTrap	tocopy2("joseph");
	ClapTrap	joseph = tocopy2;

	joey.attack("joseph");
	joseph.takeDamage(5);
	joseph.attack("joey");
	joey.takeDamage(5);
	joey.beRepaired(2);
	joey.attack("joseph");
	joseph.takeDamage(5);
	joseph.attack("joey");
	joey.takeDamage(5);
	joseph.attack("joey");
	joey.takeDamage(5);	
}
