/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:40:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 22:55:42 by jpfuhl           ###   ########.fr       */
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
Fixed::Fixed() : rawBits_( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/*	PARAMETRIC CONSTRUCTOR (INTEGER)	*/
Fixed::Fixed( int const i )
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits_ = i << this->fractionalBits_; // ??? What ???
	return ;
}

/*	PARAMETRIC CONSTRUCTOR (FLOATING-POINT)	*/
Fixed::Fixed( float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits_ = roundf(f * (1 << this->fractionalBits_)); // ??? WHAT ???
	return ;
}

/*	COPY CONSTRUCTOR	*/
Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*	DESTRUCTOR	*/
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*	COPY ASSIGNMENT OPERATOR	*/
Fixed&	Fixed::operator=( Fixed const &src )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->rawBits_ = src.getRawBits();
	return (*this);
}

/*	PUBLIC MEMBER FUNCTIONS	*/
float	Fixed::toFloat( void ) const
{
	return ((float)this->rawBits_ / (float)(1 << this->fractionalBits_)); // ???
}

int	Fixed::toInt( void ) const
{
	return (this->rawBits_ >> this->fractionalBits_); // ???
}

/*	GETTER	*/
int	Fixed::getRawBits( void ) const
{
	return (this->rawBits_);
}

/*	SETTER	*/
void	Fixed::setRawBits( int const raw)
{
	this->rawBits_ = raw;
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Fixed const &src) // ???
{
	o << src.toFloat();
	return (o);
}
