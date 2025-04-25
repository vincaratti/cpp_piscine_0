/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:01:46 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/23 14:36:31 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	ClapTrap	tocopy1("joey");
	ClapTrap	joey(tocopy1);
	ScavTrap	tocopy2("joseph");
	ScavTrap	joseph = tocopy2;
	FragTrap	tocopy3("Job");
	FragTrap	job = tocopy3;

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
}
