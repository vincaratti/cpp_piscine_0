/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:29:14 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/28 13:24:05 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal( "Cat" ), brain( NULL )
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	brain = new Brain();
}

Cat::Cat( const Cat& other ): Animal( other.type ), brain( NULL )
{
	*this = other;
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat::~Cat( void )
{
	delete brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat&	Cat::operator=( const Cat& other )
{
	type = other.type;
	delete brain;
	brain = new Brain( *(other.brain) );
	return ( *this );
}

void	Cat::makeSound( void ) const
{
	std::cout << "mow" << std::endl;
}
