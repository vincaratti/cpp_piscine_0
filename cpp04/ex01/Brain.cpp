/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/28 12:52:25 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain( const Brain& other )
{
	*this = other;
	std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain&	Brain::operator=( const Brain& other )
{
	//ideas = other.ideas;
	for (int i = 0; i < 100; i ++ )
		ideas[i] = (other.ideas)[i];
	return ( *this );
}
