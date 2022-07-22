/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:46:57 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 21:01:00 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	fileName;
	std::string	s1;
	std::string	s2;
	std::string	text;

	if (argc != 4)
		return (-1);
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream	ifs(fileName);
	if (!ifs)
	{
		std::cout << "File opening failure (infile)!" << std::endl;
		return (-1);
	}
	std::ofstream	ofs(fileName + ".replace");
	if (!ofs)
	{
		std::cout << "File opening failure (outfile)!" << std::endl;
		return (-1);
	}
	for (int i = 0; i < 5; i++)
	{
		ifs >> text;
		if (text == s1)
			text = s2;
		std::cout << text << std::endl;
		ofs << text;
	}
	ifs.close();
	ofs.close();
	return (0);
}
