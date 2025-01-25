/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:12:48 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 19:13:38 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){}

Zombie::Zombie( const std::string str )
{
	this->name = str;
}

Zombie::Zombie( const Zombie &zombie )
{
	this->name = zombie.name;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " has perished" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
