/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:55:24 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 21:42:15 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H

# include <string>

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */

class	Fixed
{
private:
	int					rawBits_;
	int const static	fractionalBits_ = 8; // darf ich das ??
public:
	Fixed();
	Fixed( Fixed const &src );
	~Fixed();

	Fixed	&operator=( Fixed const &rhs);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif /* FIXED_H */
