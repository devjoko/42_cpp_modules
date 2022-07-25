/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:34:03 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 16:42:58 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef REPLACE_H
# define REPLACE_H

# include <string>

/* ************************************************************************** */
/*                                Replace Class                               */
/* ************************************************************************** */

class	Replace
{
private:
	std::string	&infile_;
	std::string	&outfile_;
	std::string	&s1_;
	std::string	&s2_;

	int		openStreams_(std::ifstream &ifStream, std::ofstream &ofStream);
	int		closeStreams_(std::ifstream &ifStream, std::ofstream &ofStream);
	void	parseLine_(std::string &line);
public:
	Replace(std::string &infile, std::string &outfile, std::string &s1, std::string &s2);
	~Replace();

	int		parseFile();
};

#endif /* REPLACE_H */
