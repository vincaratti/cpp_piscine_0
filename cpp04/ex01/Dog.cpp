/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/28 13:23:30 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal( "Dog" ), brain( NULL )
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	brain = new Brain();
}

Dog::Dog( const Dog& other ): Animal( other.type ), brain( NULL )
{
	*this = other;
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog( void )
{
	delete brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog&	Dog::operator=( const Dog& other )
{
	type = other.type;
	delete brain;
	brain = new Brain( *(other.brain) );
	return ( *this );
}

void	Dog::makeSound( void ) const
{
	std::cout << "bork" << std::endl;
}
