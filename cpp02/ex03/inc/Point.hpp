/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:27:58 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/27 00:01:04 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"

/* ************************************************************************** */
/*                                 Point Class                                */
/* ************************************************************************** */

class	Point
{
private:
	Fixed const	x_;
	Fixed const	y_;
public:
	Point();
	Point( const float x, const float y );
	Point( const Point &point);
	~Point();
	Point	&operator=( Point const &point );
	
	Point	operator-( const Point &point ) const;

	Fixed const	getX( void ) const;
	Fixed const	getY( void ) const;
	Fixed const	getCrossProduct( Point const &other ) const;
};

std::ostream	&operator<<( std::ostream &o, Point	const &point );

#endif /* POINT_H */