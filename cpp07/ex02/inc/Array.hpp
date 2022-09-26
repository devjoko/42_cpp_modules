/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:16:28 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 21:23:06 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <string>
# include <stdexcept>

/* ************************************************************************** */
/*                             Array Class Template                           */
/* ************************************************************************** */

template <typename T>
class Array
{
private:
	unsigned int _size;
	T* _arr;
public:
	Array() : _size(0) { this->_arr = new T[0]; }
	Array(unsigned int n) : _size(n) { this->_arr = new T[this->_size]; }
	Array(const Array& rhs) { _arr = NULL; *this = rhs; }
	~Array() { delete[] this->_arr; }

	Array& operator=(const Array& rhs)
	{
		if (this != &rhs)
		{
			this->_size = rhs._size;
			if (this->_arr)
				delete[] this->_arr;
			this->_arr = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
				this->_arr[i] = rhs._arr[i];
		}
		return (*this);
	}

	T& operator[](unsigned int index)
	{
		if (index < 0 || _size <= index)
			throw (std::exception());
		return (_arr[index]);
	}

	unsigned int size(void) const { return (_size); }
};

#endif /* ARRAY_H */
