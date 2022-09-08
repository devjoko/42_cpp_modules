/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:55:24 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/08 23:00:25 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

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
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed& rhs);
	~Fixed();

	Fixed& operator=(const Fixed& rhs);

	float toFloat(void) const;
	int toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif /* FIXED_H */
