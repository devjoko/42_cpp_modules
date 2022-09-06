/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:55:24 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/06 18:17:34 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H

# include <iostream>

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */

class Fixed
{
private:
	int _rawBits;
	static const int _fractionalBits;
public:
	Fixed();
	Fixed(const Fixed& rhs);
	~Fixed();

	Fixed& operator=(const Fixed& rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif /* FIXED_H */
