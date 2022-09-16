/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:43:07 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 02:56:36 by jpfuhl           ###   ########.fr       */
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
: _input(input), _type(-1), _pseudo(false), _precision(0), _c('0'), _i(0),
_f(0.0f), _d(0.0)
{}

Convert::Convert(const Convert& rhs)
: _input(rhs._input), _type(rhs._type), _pseudo(rhs._pseudo),
_precision(rhs._precision), _c(rhs._c), _i(rhs._i), _f(rhs._f), _d(rhs._d)
{}

Convert::~Convert()
{}

Convert& Convert::operator=(const Convert& rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs._input;
		this->_type = rhs._type;
		this->_pseudo = rhs._pseudo;
		this->_precision = rhs._precision;
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
	/* Get length of input string */
	size_t len = _input.length();

	/* Check empty string */
	if (len == 0)
		throw (std::invalid_argument("error : empty string"));

	/* Check pseudo literal */
	{
		std::string pseudo[8] = {"-inff", "+inff", "inff", "nanf", "-inf", "+inf", "inf", "nan"};
		int pseudoIndex = -1;

		for (int i = 0; i < 8; i++)
		{
			if (_input == pseudo[i])
			{
				pseudoIndex = i;
				this->_pseudo = true;
				break ;
			}
		}
		switch (pseudoIndex)
		{
		case 0 ... 3:
			_type = FLOAT;
			return ;
		case 4 ... 7:
			_type = DOUBLE;
			return ;
		}
	}

	/* Check single char */
	if (!isdigit(_input[0]) && len == 1)
	{
		if (len == 1)
		{
			_type = CHAR;
			_precision = 1;
			return ;
		}
	}

	/* Parse input string and count each element */
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

	/* Check syntax errors */
	if (len != digit + sign + dot + f)
		throw (std::invalid_argument("error : type of literal cannot be determined"));

	if (sign == 1)
	{
		if (_input[0] != '-')
			throw (std::invalid_argument("error : minus sign not at beginning of argument"));
	}

	if (dot > 1 || f > 1 || sign > 1)
		throw (std::invalid_argument("error : more than one f, - or ."));

	if (dot == 1)
	{
		if (sign == 1 && !isdigit(_input[1]))
			throw (std::invalid_argument("error : minus sign not at beginning of argument"));
		else if (sign == 0 && !isdigit(_input[0]))
			throw (std::invalid_argument("error : digit not at beginning of argument"));
	}

	if (f == 1 && dot == 0)
		throw (std::invalid_argument("error : floating point number without ."));

	/* Determine precision */
	if (dot == 0)
	{
		_precision = 1;
	}
	else if (dot == 1)
	{
		for (size_t i = 0; i < len; i++)
		{
			if (_input[i] == '.')
			{
				i += 1;
				for ( ; i < len; i++)
				{
					if (std::isdigit(_input[i]))
						_precision += 1;
				}
				break ;
			}
		}
	}

	/* Determine numeric data type */
	if (dot == 1 && f == 1)
	{
		if (_input[len - 1] != 'f')
			throw (std::invalid_argument("error : f not at end of argument"));
		else if (!isdigit(_input[len - 2]))
			throw (std::invalid_argument("error : no space between . and f"));
		_type = FLOAT;
	}
	else if (dot == 1 && f == 0)
	{
		if (_input[len - 1] == '.')
			throw (std::invalid_argument("error : . at end of argument"));
		_type = DOUBLE;
	}
	else if (dot == 0 && f == 0 && digit >= 1)
	{
		_type = INT;
	}
}

/* ************************************************************************** */
/*                                   CONVERSION                               */
/* ************************************************************************** */

void Convert::toChar(void)
{
	this->_c = static_cast<unsigned char>(this->_input[0]);
	this->_i = static_cast<long>(_c);
	this->_f = static_cast<float>(_c);
	this->_d = static_cast<double>(_c);
}

void Convert::toInt(void)
{
	try
	{
		this->_i = std::stol(this->_input);
	}
	catch(...)
	{
		Convert::toDouble();
		return ;
	}
	this->_c = static_cast<unsigned char>(_i);
	this->_f = static_cast<float>(_i);
	this->_d = static_cast<double>(_i);
	
}

void Convert::toFloat(void)
{
	this->_f = std::stof(this->_input);
	this->_c = static_cast<unsigned char>(_f);
	this->_i = static_cast<long>(_f);
	this->_d = static_cast<double>(_f);
}

void Convert::toDouble(void)
{
	this->_d = std::stod(this->_input);
	this->_c = static_cast<unsigned char>(_d);
	this->_i = static_cast<long>(_d);
	this->_f = static_cast<float>(_d);
}

/* ************************************************************************** */
/*                                    PRINTER                                 */
/* ************************************************************************** */

void Convert::printResults(void) const
{
	int precisionFloat;
	int precisionDouble;

	/* Print CHAR */
	if (this->_pseudo)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(this->_c) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << _c << "\'" << std::endl;

	/* Print INT */
	if (this->_pseudo)
		std::cout << "int: impossible" << std::endl;
	else if (this->_i < std::numeric_limits<int>::min() || this->_i > std::numeric_limits<int>::max())
		std::cout << "int: Non displayable" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;

	/* Print FLOAT */
	if (_precision <= std::numeric_limits<float>::max_digits10)
		precisionFloat = _precision;
	else
		precisionFloat = std::numeric_limits<float>::max_digits10;
	std::cout << "float: " << std::setprecision(precisionFloat) << std::fixed << _f << "f" << std::endl;

	/* Print DOUBLE */
	if (_precision <= std::numeric_limits<double>::max_digits10)
		precisionDouble = _precision;
	else
		precisionDouble = std::numeric_limits<double>::max_digits10;
	std::cout << "double: " << std::setprecision(precisionDouble) << std::fixed << _d << std::endl;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Convert::convertInput(void)
{
	try
	{
		void (Convert::*funcPtr[4])(void) = {&Convert::toChar, &Convert::toInt, &Convert::toFloat, &Convert::toDouble};
		
		parser();
		(this->*funcPtr[_type])();
		printResults();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/* ************************************************************************** */
/*                                Convert Class                               */
/* ************************************************************************** */
