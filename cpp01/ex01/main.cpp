/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:55:59 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 20:21:15 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie* zombies = zombieHorde(10, "jean-caca");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
