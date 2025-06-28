/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/05/01 11:11:50 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( const AMateria& other );
	
	virtual	~AMateria( void );
	
	AMateria&	operator=( const AMateria& other );

	virtual AMateria*	clone() const = 0;
	virtual void		use( ICharacter& target );

	std::string const &	getType( void ) const;

protected:
	std::string	_type;	
};

#endif
