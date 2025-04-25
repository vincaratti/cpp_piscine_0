
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 14:41:26 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat: public Animal
{
public:
		Cat( void );
		Cat( std::string& type );
		Cat( const Cat& other );
		~Cat( void );
	Cat&	operator=( const Cat& other );
	void	makeSound( void ) const;
};

#endif
