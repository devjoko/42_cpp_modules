/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:05:20 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 15:21:42 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Memory Address:" << std::endl;
	std::cout << "STR: " << &brain << std::endl;
	std::cout << "PTR: " << stringPTR << std::endl;
	std::cout << "REF: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "Value:" << std::endl;
	std::cout << "STR: " << brain << std::endl;
	std::cout << "PTR: " << *stringPTR << std::endl;
	std::cout << "REF: " << stringREF << std::endl;
	std::cout << std::endl;

	stringREF = "THIS IS NO LONGER BRAIN";
	std::cout << "Change stringREF:" << std::endl;
	std::cout << "STR: " << brain << std::endl;
	std::cout << "PTR: " << *stringPTR << std::endl;
	std::cout << "REF: " << stringREF << std::endl;
}
