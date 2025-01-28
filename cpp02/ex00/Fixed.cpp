/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:29:57 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/28 16:59:38 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fb = 8;

Fixed::Fixed( void ):_fpnv( 0 )
{
	std::cout <<	"Default constructor called" <<
			std::endl;
}

Fixed::Fixed( Fixed &fixed ):_fpnv( fixed._fpnv )
{
	std::cout <<	"Copy constructor called" <<
			std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout <<	"Copy assignment operator called" <<
			std::endl;
	( void )fixed;
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout <<	"Destructor called" <<
			std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << 	"getRawBits member function called" <<
			std::endl;
	return (this->_fpnv);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpnv = raw;
}
