/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:27:38 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 19:53:55 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <stdexcept>
# include <limits>

/* ************************************************************************** */
/*                                Convert Class                               */
/* ************************************************************************** */

class Convert
{
private:
	std::string	_input;
	int			_type;
	bool		_pseudo;
	int			_precision;
	char		_c;
	int			_i;
	float		_f;
	double		_d;
	long double	_ld;
	bool		_intOverflow;

	void parser(void);
	void printResults(void) const;

	void toChar(void);
	void toInt(void);
	void toFloat(void);
	void toDouble(void);
	void toLongDouble(void);

	Convert();
public:
	Convert(std::string input);
	Convert(const Convert& rhs);
	~Convert();

	Convert& operator=(const Convert& rhs);

	void convertInput(void);

	enum literalType
	{
		CHAR, INT, FLOAT, DOUBLE
	};
};

#endif /* CONVERT_H */
