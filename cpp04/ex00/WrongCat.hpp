
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 14:41:26 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
		WrongCat( void );
		WrongCat( std::string& type );
		WrongCat( const WrongCat& other );
		~WrongCat( void );
	WrongCat&	operator=( const WrongCat& other );
	void	makeSound( void ) const;
};

#endif
