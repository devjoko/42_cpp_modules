/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:35:08 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/26 23:58:49 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

/* ************************************************************************** */
/*                                 Point Class                                */
/* ************************************************************************** */

/*	DEFAULT CONSTRUCTOR	*/
Point::Point() : x_( 0 ), y_ ( 0 )
{
	return ;
}

/*	PARAMETRIC CONSTRUCTOR	*/
Point::Point( const float x, const float y ) : x_ ( x ), y_ ( y )
{
	return ;
}

/*	COPY CONSTRUCTOR	*/
Point::Point( const Point &point) : x_( point.getX() ), y_( point.getY() )
{
	return ;
}

/*	DESTRUCTOR	*/
Point::~Point()
{
	return ;
}

/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Point	&Point::operator=( Point const &point __attribute__ ((unused)) )
{
	return ( *this );
}

Point	Point::operator-( const Point &point) const
{
	return ( Point( this->x_.toFloat() - point.getX().toFloat(), this->y_.toFloat() - point.getY().toFloat() ) );
}


/*	GETTER	*/
Fixed const	Point::getX( void ) const
{
	return ( this->x_ );
}

Fixed const	Point::getY( void ) const
{
	return ( this->y_ );
}

Fixed const	Point::getCrossProduct( Point const &other ) const
{
	Fixed	crossProduct( ( this->getX() * other.getY() ) - ( this->getY() * other.getX()) );
	return ( crossProduct );
}

std::ostream	&operator<<( std::ostream &o, Point	const &point )
{
	o << "( " << point.getX() << " | " << point.getY() << " )";
	return ( o );
}
