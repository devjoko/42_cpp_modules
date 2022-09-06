/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:27:38 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/07 01:05:42 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <string>
# include <stdexcept>

/* ************************************************************************** */
/*                                Convert Class                               */
/* ************************************************************************** */

enum actualType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

class Convert
{
private:
	std::string _input;
	int _type;
	char _c;
	int _i;
	float _f;
	double _d;

	void parser(void);
	void toChar(void);
	void toInt(void);
	void toFloat(void);
	void toDouble(void);
	void printResults(void) const;

	Convert();
public:
	Convert(std::string input);
	Convert(const Convert& rhs);
	~Convert();

	Convert& operator=(const Convert& rhs);

	void convertInput(void);
	// void convert(std::string input); 

	// get accessors
	std::string getInput(void) const;
	char getChar(void) const;
	int getInt(void) const;
	float getFloat(void) const;
	double getDouble(void) const;

	class InvalidInputException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Invalid input.");
		}
	};
};

#endif /* CONVERT_H */
