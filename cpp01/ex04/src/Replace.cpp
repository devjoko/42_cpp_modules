/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:41:28 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 16:46:53 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include "../inc/Replace.hpp"

/*	CONSTRUCTOR	*/
Replace::Replace(std::string &infile, std::string &outfile, std::string &s1, std::string &s2) : infile_(infile), outfile_(outfile), s1_(s1), s2_(s2)
{
	return ;
}

/*	DECONSTRUCTOR	*/
Replace::~Replace()
{
	return ;
}

/*	METHODS	*/

void	Replace::parseLine_(std::string &line)
{
	std::size_t	pos = -1;

	while ((pos = line.find(s1_, pos + 1)) != std::string::npos)
	{
		line.erase(pos, s1_.length());
		line.insert(pos, s2_);
	}
}

int	Replace::closeStreams_(std::ifstream &ifStream, std::ofstream &ofStream)
{
	ifStream.close();
	ofStream.close();
	return (0);
}

int	Replace::openStreams_(std::ifstream &ifStream, std::ofstream &ofStream)
{
	ifStream.open(this->infile_, std::ifstream::in);
	if (!ifStream)
	{
		std::cout << "Failed to open infile." << std::endl;
		return (1);
	}
	ofStream.open(this->outfile_, std::ofstream::out);
	if (!ofStream)
	{
		std::cout << "Failed to open outfile." << std::endl;
		return (2);
	}
	return (0);
}

int	Replace::parseFile()
{
	std::ifstream	infileStream;
	std::ofstream	outfileStream;
	std::string		line;

	if (this->openStreams_(infileStream, outfileStream) != 0)
		return (-1);

	std::cout << std::endl << "SETTINGS:" << std::endl;
	std::cout << std::setw(10) << "infile: " << this->infile_ << std::endl;
	std::cout << std::setw(10) << "outfile: " << this->outfile_ << std::endl;
	std::cout << std::setw(10) << "s1: " << this->s1_ << std::endl;
	std::cout << std::setw(10) << "s2: " << this->s2_ << std::endl << std::endl;

	std::cout << "Replacing \"" << this->s1_ << "\" with \"" << this->s2_ << "\" ..." << std::endl << std::endl;
	while (!infileStream.eof())
	{
		getline(infileStream, line);
		this->parseLine_(line);
		outfileStream << line;
		if (!infileStream.eof())
			outfileStream << std::endl;
	}
	return (0);
}
