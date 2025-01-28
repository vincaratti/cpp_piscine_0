/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:29:57 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/28 22:41:58 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fb = 8;

Fixed::Fixed( void ):_fpnv( 0 ){}

Fixed::Fixed( const Fixed &fixed )
{
	*this = fixed;
}

Fixed::~Fixed( void ){}

Fixed::Fixed( int const n ): _fpnv( n << _nb_fb ){}

Fixed::Fixed( float const f ): _fpnv( roundf( f * ( 1 << _nb_fb ) ) ){}

Fixed& Fixed::operator=( const Fixed& other )
{
	_fpnv = other._fpnv;
	return ( *this );
}

std::ostream& operator<<( std::ostream& output, const Fixed& fixed )
{
	output << fixed.toFloat();
	return ( output );
}

int	Fixed::operator>( const Fixed& other ){ return ( this->_fpnv > other._fpnv ); }

int	Fixed::operator<( const Fixed& other ){ return ( this->_fpnv < other._fpnv ); }

int	Fixed::operator>=( const Fixed& other ){ return ( this->_fpnv >= other._fpnv ); }

int	Fixed::operator<=( const Fixed& other ){ return ( this->_fpnv <= other._fpnv ); }

int	Fixed::operator==( const Fixed& other ){ return ( this->_fpnv == other._fpnv ); }

int	Fixed::operator!=( const Fixed& other ){ return ( this->_fpnv != other._fpnv ); }

Fixed	Fixed::operator+( const Fixed& other )
{
	Fixed	ret( this->_fpnv + other._fpnv );
	return ( ret );
}

Fixed	Fixed::operator-( const Fixed& other )
{
	Fixed	ret( this->_fpnv - other._fpnv );
	return ( ret );
}

Fixed	Fixed::operator*( const Fixed& other )
{
	Fixed	ret;
	ret._fpnv = ( this->_fpnv * ( other._fpnv >> _nb_fb ) );
	return ( ret );
}

Fixed	Fixed::operator/( const Fixed& other )
{
	Fixed	ret;
	ret._fpnv = ( this->_fpnv / ( other._fpnv << _nb_fb ) );
	return ( ret );
}

Fixed&	Fixed::operator++( void )
{
	_fpnv += 1;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed	temp = *this;
	this->_fpnv += 1;
	return ( temp );
}

Fixed& Fixed::operator--( void )
{
	_fpnv -= 1;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed	temp = *this ;
	this->_fpnv -= 1;
	return ( temp );
}

int	Fixed::getRawBits( void ) const
{
	return ( this->_fpnv );
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpnv = raw;
}

float	Fixed::toFloat( void ) const
{
	return ( ( float ) _fpnv / ( float )( 1 << _nb_fb ) );
}

int	Fixed::toInt( void ) const
{
	return ( ( int ) ( _fpnv >> _nb_fb ) );
}

Fixed& Fixed::min( Fixed& left, Fixed& right )
{
	if (left._fpnv < right._fpnv )
		return ( left );
	return ( right );
}

const Fixed& Fixed::min( const Fixed& left, const Fixed& right )
{
	if (left._fpnv < right._fpnv )
		return ( left );
	return ( right );
}

Fixed& Fixed::max( Fixed& left, Fixed& right )
{
	if (left._fpnv > right._fpnv )
		return ( left );
	return ( right );
}

const Fixed& Fixed::max( const Fixed& left, const Fixed& right )
{
	if (left._fpnv > right._fpnv )
		return ( left );
	return ( right );
}
