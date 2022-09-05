/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:46:57 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:05:56 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong usage: ./replace <infile> <s1> <s2>" << std::endl;
		return (-1);
	}
	std::string infile = argv[1];
	std::string outfile = infile + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	Replace sedIsForLosers(infile, outfile, s1, s2);

	if (sedIsForLosers.parseFile() != 0)
		return (-2);
	return (0);
}
