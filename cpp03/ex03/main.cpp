/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:01:46 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 12:54:03 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	ClapTrap	tocopy1("joey");
	ClapTrap	joey(tocopy1);
	ScavTrap	tocopy2("joseph");
	ScavTrap	joseph = tocopy2;
	FragTrap	tocopy3("Job");
	FragTrap	job = tocopy3;
	DiamondTrap	tocopy4("Joe");
	DiamondTrap	joe = tocopy4;	
	DiamondTrap	tocopy5("Joe2");
	DiamondTrap	joe2 = tocopy5;

	joey.attack("joseph");
	joseph.takeDamage(5);
	joseph.attack("job");
	job.takeDamage(5);
	job.beRepaired(2);
	joseph.guardGate();
	job.highFivesGuys();
	job.attack("joey");
	joey.takeDamage(5);
	joey.attack("joseph");
	joseph.takeDamage(5);
	joseph.attack("job");
	job.takeDamage(5);
	job.attack("Joe");
	joe.takeDamage(5);
	joe.whoAmI();
	joe2.whoAmI();
}
