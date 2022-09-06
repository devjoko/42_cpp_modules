/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:40:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/06 18:52:06 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                              Static Declarations                           */
/* ************************************************************************** */

const int Fixed::_fractionalBits = 8;

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Fixed::Fixed()
: _rawBits(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int Constructor called" << std::endl;
	this->_rawBits = i << this->_fractionalBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float Constructor called" << std::endl;
	this->_rawBits = roundf(f * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed& rhs)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = rhs;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

float Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_fractionalBits);
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

int Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */
