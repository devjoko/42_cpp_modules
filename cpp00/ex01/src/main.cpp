/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:12:23 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/20 20:58:33 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ReadMe:
**
**	To give the <Awesome PhoneBook™> a truly awesome look, some ASCII Art was used.
**	http://www.ascii-art.com
**	Joan G. Stark: https://web.archive.org/web/20091028013825/http://www.geocities.com/SoHo/7373/
*/

#include <iostream>
#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	phoneBook.printWelcomeMessage();
	while (phoneBook.getLoopStatus())
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			phoneBook.exit();
	}
	return (0);
}
