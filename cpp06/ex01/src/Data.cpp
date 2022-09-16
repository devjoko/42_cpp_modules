/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:43:07 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 03:21:14 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

/* ************************************************************************** */
/*                                   Data Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Data::Data()
: _string("default"), _character('a'), _integer(0)
{}

Data::Data(std::string str, char c, int i)
: _string(str), _character(c), _integer(i)
{}

Data::Data(const Data& rhs)
: _string(rhs._string), _character(rhs._character), _integer(rhs._integer)
{}

Data::~Data()
{}

Data& Data::operator=(const Data& rhs)
{
	if (this != &rhs)
	{
		this->_string = rhs._string;
		this->_character = rhs._character;
		this->_integer = rhs._integer;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string Data::getStr(void) const
{
	return (this->_string);
}

char Data::getChar(void) const
{
	return (this->_character);
}

int Data::getInt(void) const
{
	return (this->_integer);
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const Data& rhs)
{
	out << "Data contains " << rhs.getStr() << ", " << rhs.getChar() << " and " << rhs.getInt() << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                   Data Class                               */
/* ************************************************************************** */
