/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:27:38 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 03:21:04 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DATA_H
# define DATA_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                   Data Class                               */
/* ************************************************************************** */

class Data
{
private:
	std::string _string;
	char _character;
	int _integer;
public:
	Data();
	Data(std::string str, char c, int i);
	Data(const Data& rhs);
	~Data();

	Data& operator=(const Data& rhs);

	std::string getStr(void) const;
	char getChar(void) const;
	int getInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Data& rhs);

#endif /* DATA_H */
