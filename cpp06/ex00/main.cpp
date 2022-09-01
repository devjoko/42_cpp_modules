/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:39:17 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 20:14:06 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::cout << "PARSE INPUT | Must be argc == 2" << std::endl;
	std::cout << "TRIM WHITESPACE | if given with \"   \" " << std::endl;
	std::cout << "DETECT TYPE" << std::endl;

	for (int i = 1; i < argc; ++i)
	{
		std::string tmp = argv[i];
		std::cout << tmp << " " << tmp.length() << " ";
		if (argv[i][0] == '-')
			std::cout << "NEGATIVE";
		// else if (argv[i][0] == '\'' && argv[i][2] == '\'') oder das
		else if (tmp.length() == 1)
			std::cout << "CHAR";
		else if (argv[i][tmp.length() - 1] == 'f')
			std::cout << "FLOAT";
		else if (tmp == "nan")
			std::cout << "NAN";
		else
			std::cout << "DOUBLE";
		std::cout << std::endl;
		
		// can check strcmp pseudoliterals: -inff, +inff , nanf | -inf, +inf, nan
		// also impossible for char/int
	}


	return (0);
}
