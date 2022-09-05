/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:41:28 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:07:36 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Replace.hpp"

/* ************************************************************************** */
/*                                Replace Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                 Class Form                                 */
/* ************************************************************************** */

Replace::Replace(std::string& infile, std::string& outfile, std::string& s1, std::string& s2)
: _infile(infile), _outfile(outfile), _s1(s1), _s2(s2)
{
	std::cout << "Constructor <<Replace Object>>" << std::endl;
}

Replace::~Replace()
{
	std::cout << "Destructor <<Replace Object>>" << std::endl;
}

/* ************************************************************************** */
/*                          Private Member Functions                          */
/* ************************************************************************** */

void Replace::_parseLine(std::string& line)
{
	std::size_t pos = -1;

	while ((pos = line.find(_s1, pos + 1)) != std::string::npos)
	{
		line.erase(pos, _s1.length());
		line.insert(pos, _s2);
	}
}

int Replace::_closeStreams(std::ifstream& ifStream, std::ofstream& ofStream)
{
	ifStream.close();
	ofStream.close();
	return (0);
}

int Replace::_openStreams(std::ifstream& ifStream, std::ofstream& ofStream)
{
	ifStream.open(this->_infile, std::ifstream::in);
	if (!ifStream)
	{
		std::cout << "Failed to open infile." << std::endl;
		return (1);
	}
	ofStream.open(this->_outfile, std::ofstream::out);
	if (!ofStream)
	{
		std::cout << "Failed to open outfile." << std::endl;
		return (2);
	}
	return (0);
}

/* ************************************************************************** */
/*                          Public Member Functions                           */
/* ************************************************************************** */

int	Replace::parseFile()
{
	std::ifstream infileStream;
	std::ofstream outfileStream;
	std::string line;

	if (this->_openStreams(infileStream, outfileStream) != 0)
		return (-1);

	std::cout << std::endl << "SETTINGS:" << std::endl;
	std::cout << std::setw(10) << "infile: " << this->_infile << std::endl;
	std::cout << std::setw(10) << "outfile: " << this->_outfile << std::endl;
	std::cout << std::setw(10) << "s1: " << this->_s1 << std::endl;
	std::cout << std::setw(10) << "s2: " << this->_s2 << std::endl << std::endl;

	std::cout << "Replacing \"" << this->_s1 << "\" with \"" << this->_s2 << "\" ..." << std::endl << std::endl;
	while (!infileStream.eof())
	{
		getline(infileStream, line);
		this->_parseLine(line);
		outfileStream << line;
		if (!infileStream.eof())
			outfileStream << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                Replace Class                               */
/* ************************************************************************** */
