/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:43:07 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/07 01:41:43 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Convert.hpp"

/* ************************************************************************** */
/*                                Convert Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Convert::Convert(std::string input)
: _input(input), _type(-1), _c('0'), _i(0), _f(0.0f), _d(0.0)
{
	std::cout << "Constructor Convert Object" << std::endl;
}

Convert::Convert(const Convert& rhs)
: _input(rhs._input), _type(rhs._type), _c(rhs._c), _i(rhs._i), _f(rhs._f), _d(rhs._d)
{
	std::cout << "Copy Constructor Convert Object" << std::endl;
}

Convert::~Convert()
{
	std::cout << "Destructor Convert Object" << std::endl;
}

Convert& Convert::operator=(const Convert& rhs)
{
	std::cout << "Copy Assignment Operator Convert Object" << std::endl;
	if (this != &rhs)
	{
		this->_input = rhs._input;
		this->_type = rhs._type;
		this->_c = rhs._c;
		this->_i = rhs._i;
		this->_f = rhs._f;
		this->_d = rhs._d;
	}
	return (*this);
}

/* ************************************************************************** */
/*                            Private Member Functions                        */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     PARSER                                 */
/* ************************************************************************** */

void Convert::parser(void)
{
	size_t len = _input.length();

	if (len == 0)
	{
		std::cout << "(empty string)" << std::endl;
		throw (Convert::InvalidInputException());
	}

	// std::cout << "CHECK PSEUDO" << std::endl;
	{
		std::string pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
		int pseudoIndex = -1;

		for (int i = 0; i < 6; i++)
		{
			if (_input == pseudo[i])
			{
				pseudoIndex = i;
				break ;
			}
		}

		switch (pseudoIndex)
		{
		case 0 ... 2:
			std::cout << "IS FLOAT" << std::endl;
			_type = FLOAT;
			return ;
		case 3: case 4: case 5:
			std::cout << "IS DOUBLE" << std::endl;
			_type = DOUBLE;
			return ;
		}
	}

	// std::cout << "CHECK SINGLE CHAR" << std::endl;
	if (!isdigit(_input[0]) && len == 1)
	{
		if (len == 1)
		{
			std::cout << "IS CHAR" << std::endl;
			_type = CHAR;
			return ;
		}
	}

	// std::cout << "CHECKING INPUT STRING" << std::endl;

	size_t digit = 0;
	size_t sign = 0;
	size_t dot = 0;
	size_t f = 0;
	size_t c = 0;

	for (size_t i = 0; i < len; i++)
	{
		if (isdigit(_input[i]))
			digit += 1;
		else if (_input[i] == '-')
			sign += 1;
		else if (_input[i] == '.')
			dot += 1;
		else if (_input[i] == 'f')
			f += 1;
		else
			c += 1;
	}

	if (len != digit + sign + dot + f)
	{
		std::cout << "(type cannot be determined)" << std::endl;
		throw (Convert::InvalidInputException());
	}

	if (sign == 1)
	{
		if (_input[0] != '-')
		{
			std::cout << "(- wrong position)" << std::endl;
			throw (Convert::InvalidInputException());
		}
	}

	if (dot > 1 || f > 1 || sign > 1)
	{
		std::cout << "(more than 1 . or f  or -)" << std::endl;
		throw (Convert::InvalidInputException());
	}

	if (dot == 1)
	{
		if (sign == 1 && !isdigit(_input[1]))
		{
			std::cout << "(- digit not at beginning)" << std::endl;
			throw (Convert::InvalidInputException());
		}
		else if (sign == 0 && !isdigit(_input[0]))
		{
			std::cout << "(digit not at beginning)" << std::endl;
			throw (Convert::InvalidInputException());
		}
	}

	if (f == 1 && dot == 0)
	{
		std::cout << "(float without precision)" << std::endl;
		throw (Convert::InvalidInputException());
	}

	if (dot == 1 && f == 1)
	{
		if (_input[len - 1] != 'f')
		{
			std::cout << "(f not at end)" << std::endl;
			throw (Convert::InvalidInputException());
		}
		else if (!isdigit(_input[len - 2]))
		{
			std::cout << "(no space between . and f)" << std::endl;
			throw (Convert::InvalidInputException());
		}
		std::cout << "IS FLOAT" << std::endl;
		_type = FLOAT;
	}
	else if (dot == 1 && f == 0)
	{
		if (_input[len - 1] == '.')
		{
			std::cout << "(. at end)" << std::endl;
			throw (Convert::InvalidInputException());
		}
		std::cout << "IS DOUBLE" << std::endl;
		_type = DOUBLE;
		return ;
	}
	else if (dot == 0 && f == 0 && digit >= 1)
	{
		std::cout << "IS INT" << std::endl;
		_type = INT;
	}
}

/* ************************************************************************** */
/*                                   CONVERSION                               */
/* ************************************************************************** */

void Convert::toChar(void)
{
	std::cout << "toChar" << std::endl;
	this->_c = this->_input[0];
	this->_i = static_cast<int>(_c);
	this->_f = static_cast<float>(_c);
	this->_d = static_cast<double>(_c);
}

void Convert::toInt(void)
{
	std::cout << "toInt" << std::endl;
	this->_i = std::stoi(this->_input);
	this->_c = static_cast<char>(_i);
	this->_f = static_cast<float>(_i);
	this->_d = static_cast<double>(_i);
	
}

void Convert::toFloat(void)
{
	std::cout << "toFloat" << std::endl;
	this->_f = std::stof(this->_input);
	this->_c = static_cast<char>(_f);
	this->_i = static_cast<int>(_f);
	this->_d = static_cast<double>(_f);
}

void Convert::toDouble(void)
{
	std::cout << "toDouble" << std::endl;
	this->_d = std::stod(this->_input);
	this->_c = static_cast<char>(_d);
	this->_i = static_cast<int>(_d);
	this->_f = static_cast<float>(_d);
}

// special cases, when conversion fails... limits
// how to add:
// Non-displayable?
// impossible
// improved printer?
// header numeric limits and special values

/* ************************************************************************** */
/*                                    PRINTER                                 */
/* ************************************************************************** */

void Convert::printResults(void) const
{
	std::cout << "char: \'" << _c << "\'" << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << _f << ".0f" << std::endl;
	std::cout << "double: " << _d << ".0" << std::endl;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Convert::convertInput(void)
{
	try
	{
		parser();

		void (Convert::*funcPtr[4])(void) = {&Convert::toChar, &Convert::toInt, &Convert::toFloat, &Convert::toDouble};
		(this->*funcPtr[_type])();

		printResults();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string Convert::getInput(void) const
{
	return (this->_input);
}

char Convert::getChar(void) const
{
	return (this->_c);
}

int Convert::getInt(void) const
{
	return (this->_i);
}

float Convert::getFloat(void) const
{
	return (this->_f);
}

double Convert::getDouble(void) const
{
	return (this->_d);
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */


/* ************************************************************************** */
/*                                Convert Class                               */
/* ************************************************************************** */
