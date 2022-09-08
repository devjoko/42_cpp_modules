/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:40:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/08 23:15:02 by jpfuhl           ###   ########.fr       */
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
: _fixedPointNumber(0) {}

Fixed::Fixed(const int i)
{
	this->_fixedPointNumber = i << this->_fractionalBits;
}

Fixed::Fixed(const float f)
{
	this->_fixedPointNumber = static_cast<int>(roundf(f * (1 << this->_fractionalBits)));
}

Fixed::Fixed(const Fixed& rhs)
{
	*this = rhs;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	if (this != &rhs)
		this->_fixedPointNumber = rhs.getRawBits();
	return (*this);
}

/* ************************************************************************** */
/*                            Overloaded Operators                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                            COMPARISON OPERATORS                            */
/* ************************************************************************** */

bool Fixed::operator>(const Fixed& rhs) const
{
	return (this->_fixedPointNumber > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (this->_fixedPointNumber < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return (this->_fixedPointNumber >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return (this->_fixedPointNumber <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return (this->_fixedPointNumber == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return (this->_fixedPointNumber != rhs.getRawBits());
}

/* ************************************************************************** */
/*                             ARITHMETIC OPERATORS                           */
/* ************************************************************************** */

Fixed Fixed::operator+(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/* ************************************************************************** */
/*                  INCREMENT AND DECREMENT OPERATORS [PREFIX]                */
/* ************************************************************************** */

Fixed Fixed::operator++(void)
{
	this->_fixedPointNumber++;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->_fixedPointNumber--;
	return (*this);
}

/* ************************************************************************** */
/*                 INCREMENT AND DECREMENT OPERATORS [POSTFIX]                */
/* ************************************************************************** */

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_fixedPointNumber++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->_fixedPointNumber--;
	return (tmp);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixedPointNumber) / static_cast<float>(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointNumber >> this->_fractionalBits);
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

int Fixed::getRawBits(void) const
{
	return (this->_fixedPointNumber);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNumber = raw;
}

/* ************************************************************************** */
/*                           Static Member Functions                          */
/* ************************************************************************** */

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream &out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */
