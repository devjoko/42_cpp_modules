/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:40:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/26 19:04:44 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "../inc/Fixed.hpp"

/* ************************************************************************** */
/*                              Static Declarations                           */
/* ************************************************************************** */

int const	Fixed::fractionalBits_ = 8;

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */

/*	DEFAULT CONSTRUCTOR	*/
Fixed::Fixed() : fixedPointNumber_( 0 )
{
	return ;
}

/*	PARAMETRIC CONSTRUCTOR (INTEGER)	*/
Fixed::Fixed( int const i )
{
	this->fixedPointNumber_ = i << this->fractionalBits_;
	return ;
}

/*	PARAMETRIC CONSTRUCTOR (FLOATING-POINT)	*/
Fixed::Fixed( float const f )
{
	this->fixedPointNumber_ = roundf( f * ( 1 << this->fractionalBits_ ) );
	return ;
}

/*	COPY CONSTRUCTOR	*/
Fixed::Fixed( Fixed const &src )
{
	*this = src;
	return ;
}

/*	DESTRUCTOR	*/
Fixed::~Fixed()
{
	return ;
}

/*	COPY ASSIGNMENT OPERATOR	*/
Fixed&	Fixed::operator=( Fixed const &src )
{
	if ( this != &src )
		this->fixedPointNumber_ = src.getRawBits();
	return ( *this );
}

/*	COMPARISON OPERATORS	*/
bool	Fixed::operator>( Fixed const &other ) const
{
	return ( this->fixedPointNumber_ > other.getRawBits() );
}

bool	Fixed::operator<( Fixed const &other ) const
{
	return ( this->fixedPointNumber_ < other.getRawBits() );
}

bool	Fixed::operator>=( Fixed const &other ) const
{
	return ( this->fixedPointNumber_ >= other.getRawBits() );
}

bool	Fixed::operator<=( Fixed const &other ) const
{
	return ( this->fixedPointNumber_ <= other.getRawBits() );
}

bool	Fixed::operator==( Fixed const &other ) const
{
	return ( this->fixedPointNumber_ == other.getRawBits() );
}

bool	Fixed::operator!=( Fixed const &other ) const
{
	return ( this->fixedPointNumber_ != other.getRawBits() );
}

/*	ARITHMETIC OPERATORS	*/
Fixed	Fixed::operator+( Fixed const &other ) const
{
	return ( Fixed( this->toFloat() + other.toFloat() ) );
}

Fixed	Fixed::operator-( Fixed const &other) const
{
	return ( Fixed( this->toFloat() + other.toFloat() ) );
}

Fixed	Fixed::operator*( Fixed const &other ) const
{
	return ( Fixed( this->toFloat() * other.toFloat() ) );
}

Fixed	Fixed::operator/( Fixed const &other ) const
{
	return ( Fixed( this->toFloat() / other.toFloat() ) );
}

/*	INCREMENT AND DECREMENT OPERATORS [PREFIX]	*/
Fixed	Fixed::operator++( void )
{
	this->fixedPointNumber_++;
	return ( *this );
}

Fixed	Fixed::operator--( void )
{
	this->fixedPointNumber_--;
	return ( *this );
}

/*	INCREMENT AND DECREMENT OPERATORS [POSTFIX]	*/
Fixed	Fixed::operator++( int )
{
	Fixed	tmp( *this );

	this->fixedPointNumber_++;
	return ( tmp );
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp( *this );

	this->fixedPointNumber_--;
	return ( tmp );
}

/*	PUBLIC MEMBER FUNCTIONS	*/
float	Fixed::toFloat( void ) const
{
	return ( (float)this->fixedPointNumber_ / (float)( 1 << this->fractionalBits_) );
}

int	Fixed::toInt( void ) const
{
	return ( this->fixedPointNumber_ >> this->fractionalBits_ );
}

/*	GETTER	*/
int	Fixed::getRawBits( void ) const
{
	return ( this->fixedPointNumber_ );
}

/*	SETTER	*/
void	Fixed::setRawBits( int const raw )
{
	this->fixedPointNumber_ = raw;
}

/*	STATIC PUBLIC MEMBER FUNCTIONS	*/
Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if ( a.toFloat() < b.toFloat() )
		return ( a );
	return ( b );
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if ( a.toFloat() > b.toFloat() )
		return ( a );
	return ( b );
}

const Fixed	&Fixed::min( Fixed const &a, Fixed const &b )
{
	if ( a.toFloat() < b.toFloat() )
		return ( a );
	return ( b );
}

const Fixed	&Fixed::max( Fixed const &a, Fixed const &b )
{
	if ( a.toFloat() > b.toFloat() )
		return ( a );
	return ( b );
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

std::ostream	&operator<<( std::ostream &o, Fixed const &src )
{
	o << src.toFloat();
	return ( o );
}
