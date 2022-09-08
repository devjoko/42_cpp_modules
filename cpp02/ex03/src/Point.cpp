/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:35:08 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/08 23:20:31 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

/* ************************************************************************** */
/*                                 Point Class                                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Point::Point()
: _x(0), _y(0) {}

Point::Point(const float x, const float y)
: _x(x), _y(y) {}

Point::Point(const Point& rhs)
: _x(rhs.getX()), _y(rhs.getY()) {}

Point::~Point() {}

Point& Point::operator=(const Point& rhs)
{
	if (this != &rhs)
	{
		std::cout << "error: cannot copy assign values to const attributes" << std::endl;
	}
	return (*this);
}

/* ************************************************************************** */
/*                            Overloaded Operators                            */
/* ************************************************************************** */

Point Point::operator-(const Point& rhs) const
{
	return (Point(this->_x.toFloat() - rhs.getX().toFloat(), this->_y.toFloat() - rhs.getY().toFloat()));
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

const Fixed Point::getX(void) const
{
	return (this->_x);
}

const Fixed Point::getY(void) const
{
	return (this->_y);
}

const Fixed Point::getCrossProduct(const Point& rhs) const
{
	Fixed crossProduct((this->getX() * rhs.getY()) - (this->getY() * rhs.getX()));
	return (crossProduct);
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const Point& obj)
{
	out << "( " << obj.getX() << " | " << obj.getY() << " )";
	return (out);
}

/* ************************************************************************** */
/*                                 Point Class                                */
/* ************************************************************************** */
