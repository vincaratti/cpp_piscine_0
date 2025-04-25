/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/25 14:31:31 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
public:
		WrongAnimal( void );
		WrongAnimal( const std::string& type );
		WrongAnimal( const WrongAnimal& other );
	virtual	~WrongAnimal( void );
	WrongAnimal&	operator=( const WrongAnimal& other );

	void	makeSound( void ) const;
	std::string	getType( void ) const;
protected:
	std::string type;
};

#endif
