/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:12:23 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/18 20:59:18 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	int			index;
	std::string	command;

	std::cout << "Welcome to your <Awesome PhoneBook™>." << std::endl;
	std::cout << "We provide you with the unbelievable technology of the 80s!" << std::endl;
	
	std::cout << "[ADD]		Save a new contact." << std::endl;
	std::cout << "[SEARCH]	Display a specific contact." << std::endl;
	std::cout << "[EXIT]		Quit the program. WARNING! All contacts are lost forever!" << std::endl;
	index = 0;
	while (phoneBook.getLoopStatus())
	{
		std::cout << "> ";
		std::cin >> command;
		std::cout << "You've entered: " << command << std::endl;
		if (index == 5)
			phoneBook.setLoopStatus(false);
		std::cout << index << std::endl;
		index++;
	}
	return (0);
}
