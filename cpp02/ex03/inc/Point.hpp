/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:27:58 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/08 23:18:56 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

/* ************************************************************************** */
/*                                 Point Class                                */
/* ************************************************************************** */

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point& rhs);
	~Point();

	Point& operator=(const Point& rhs);

	Point operator-(const Point& rhs) const;

	const Fixed getX(void) const;
	const Fixed getY(void) const;
	const Fixed getCrossProduct(const Point& rhs) const;
};

std::ostream& operator<<(std::ostream& out, const Point& obj);

#endif /* POINT_H */
