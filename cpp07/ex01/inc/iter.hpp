/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:37:27 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 20:22:16 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_H
# define ITER_H

# include <iostream>

/* ************************************************************************** */

template<typename T>
void iter(T* array, size_t size, void (*function)(T&))
{
	for (size_t i = 0; i < size; i++)
		(*function)(array[i]);
}

/* ************************************************************************** */

template<typename T>
void print(T& val)
{
	std::cout << val << std::endl;
}

template<typename T>
void printTwice(T& val)
{
	std::cout << val << " " << val << std::endl;
}

/* ************************************************************************** */

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream& operator<<(std::ostream& o_stream, Awesome& a)
{
	o_stream << a.get();
	return (o_stream);
}

/* ************************************************************************** */

#endif /* ITER_H */
