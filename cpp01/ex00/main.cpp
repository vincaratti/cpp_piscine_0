/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:55:59 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 19:14:21 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie*	heap_zombie;
	heap_zombie = newZombie("james");
	heap_zombie->announce();
	randomChump("jameth");
	delete heap_zombie;
	return (0);
}
