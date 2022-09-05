/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:34:03 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:01:27 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <iomanip>
# include <fstream>
# include <string>

/* ************************************************************************** */
/*                                Replace Class                               */
/* ************************************************************************** */

class Replace
{
private:
	std::string& _infile;
	std::string& _outfile;
	std::string& _s1;
	std::string& _s2;

	int _openStreams(std::ifstream& ifStream, std::ofstream& ofStream);
	int _closeStreams(std::ifstream& ifStream, std::ofstream& ofStream);
	void _parseLine(std::string& line);
public:
	Replace(std::string& infile, std::string& outfile, std::string& s1, std::string& s2);
	~Replace();

	int parseFile();
};

#endif /* REPLACE_H */
