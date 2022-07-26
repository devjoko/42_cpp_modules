/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:55:24 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/26 19:48:31 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H

# include <iostream>

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */

class	Fixed
{
private:
	int					fixedPointNumber_;
	static const int	fractionalBits_;
public:
	Fixed();
	Fixed( int const i );
	Fixed( float const f );
	Fixed( Fixed const &src );
	~Fixed();
	Fixed	&operator=( Fixed const &src );

	bool	operator>( Fixed const &other ) const;
	bool	operator<( Fixed const &other ) const;
	bool	operator>=( Fixed const &other ) const;
	bool	operator<=( Fixed const &other ) const;
	bool	operator==( Fixed const &other ) const;
	bool	operator!=( Fixed const &other ) const;

	Fixed	operator+( Fixed const &other ) const;
	Fixed	operator-( Fixed const &other ) const;
	Fixed	operator*( Fixed const &other ) const;
	Fixed	operator/( Fixed const &other ) const;

	Fixed	operator++( void );
	Fixed	operator--( void );
	Fixed	operator++( int );
	Fixed	operator--( int );

	float	toFloat ( void ) const;
	int		toInt ( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	static Fixed		&min( Fixed &a, Fixed &b );
	static Fixed		&max( Fixed &a, Fixed &b );
	static const Fixed	&min( Fixed const &a, Fixed const &b );
	static const Fixed	&max( Fixed const &a, Fixed const &b );
};

std::ostream	&operator<<( std::ostream &o, Fixed const &src );

#endif /* FIXED_H */
