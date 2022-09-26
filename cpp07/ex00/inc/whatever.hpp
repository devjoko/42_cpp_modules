/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:47:46 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 18:22:33 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

/* ************************************************************************** */

template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T& min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
const T& max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	return (b);
}

/* ************************************************************************** */

class Awesome
{
private:
    int _n;
public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
};

std::ostream & operator<< (std::ostream &o_stream, Awesome &a)
{
    o_stream << a.get_n() << "\n";
    return (o_stream);
}

/* ************************************************************************** */

#endif /* WHATEVER_HPP */
