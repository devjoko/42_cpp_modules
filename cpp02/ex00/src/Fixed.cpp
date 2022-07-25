/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:40:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 21:56:09 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Fixed.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Fixed::Fixed() : rawBits_( 0 )
{
	std::cout << "Default constructor called" << std::endl;
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
Fixed&	Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->rawBits_ = rhs.getRawBits();
	return (*this);
}

/*	GETTER	*/
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits_);
}

/*	SETTER	*/
void	Fixed::setRawBits( int const raw)
{
	this->rawBits_ = raw;
}
