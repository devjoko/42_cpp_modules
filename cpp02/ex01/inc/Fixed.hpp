/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:55:24 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 22:55:16 by jpfuhl           ###   ########.fr       */
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
	int					rawBits_;
	int const static	fractionalBits_;
public:
	Fixed();
	Fixed( int const i );
	Fixed( float const f );
	Fixed( Fixed const &src );
	~Fixed();

	Fixed	&operator=( Fixed const &src );

	float	toFloat ( void ) const;
	int		toInt ( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream	&operator<<( std::ostream &o, Fixed const &src );

#endif /* FIXED_H */
