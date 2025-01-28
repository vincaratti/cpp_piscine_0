/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:29:57 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/28 18:35:24 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fb = 8;

Fixed::Fixed( void ):_fpnv( 0 )
{
	std::cout <<	"Default constructor called" <<
			std::endl;
}

Fixed::Fixed( const Fixed &fixed ):_fpnv( fixed._fpnv )
{
	std::cout <<	"Copy constructor called" <<
			std::endl;
}

Fixed::~Fixed( void )
{
	std::cout <<	"Destructor called" <<
			std::endl;
}

Fixed::Fixed( int const n ): _fpnv( n << _nb_fb )
{
	std::cout <<	"Int constructor called" <<
			std::endl;
}

Fixed::Fixed( float const f ): _fpnv( roundf( f * ( 1 << _nb_fb ) ) )
{
	std::cout <<	"Float constructor called" <<
			std::endl;
}

Fixed& Fixed::operator=( const Fixed& other)
{
	std::cout <<	"Copy assignment operator called" <<
			std::endl;
	if ( this != &other)
		_fpnv = other._fpnv;
	return ( *this );
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
	output << fixed.toFloat();
	return ( output );
}

int	Fixed::getRawBits( void ) const
{
	std::cout << 	"getRawBits member function called" <<
			std::endl;
	return ( this->_fpnv );
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpnv = raw;
}

float	Fixed::toFloat( void ) const
{
	return ( ( float ) _fpnv / ( float ) ( 1 << _nb_fb ) );
}

int	Fixed::toInt( void ) const
{
	return ( ( int ) ( _fpnv >> _nb_fb ) );
}
