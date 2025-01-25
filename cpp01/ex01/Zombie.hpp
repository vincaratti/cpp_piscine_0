/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:04:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 20:08:07 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie( void );
	Zombie( const std::string str);
	Zombie( const Zombie &zombie );
	~Zombie( void );
	void	announce( void );
	void	setName( std::string name );
private:
	std::string	name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
