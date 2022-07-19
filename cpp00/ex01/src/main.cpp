/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:12:23 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/19 16:41:23 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// readme
// http://www.ascii-art.com
// website of artist https://web.archive.org/web/20091028013825/http://www.geocities.com/SoHo/7373/

#include <iostream>
#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

static void	print_cat_goodbye(void)
{
	std::cout << std::endl;
	std::cout << "             *     \033[1;33m,MMM8&&&.\033[0m            *" << std::endl;
	std::cout << "                  \033[1;33mMMMM88&&&&&\033[0m    ." << std::endl;
	std::cout << "                 \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "     *           \033[1;33mMM88&&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33m'MMM88&&&&&&'\033[0m" << std::endl;
	std::cout << "                   \033[1;33m'MMM8&&&'\033[0m      *" << std::endl;
	std::cout << "          |\\___/|" << std::endl;
	std::cout << "          )     (             .              '" << std::endl;
	std::cout << "         =\\     /=" << std::endl;
	std::cout << "           )===(       *" << std::endl;
	std::cout << "          /     \\ " << std::endl;
	std::cout << "          |     |" << std::endl;
	std::cout << "         /       \\ " << std::endl;
	std::cout << "         \\       /" << std::endl;
	std::cout << "  _/\\_/\\_/\\__  _/_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_" << std::endl;
	std::cout << "  |  |  |  |( (  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  |  |  |  | ) ) |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  |  |  |  |(_(  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  jgs|  |  |  |  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << std::endl;
}

static void	print_cat_hello(void)
{
	std::cout << std::endl;
	std::cout << "             \033[1;36m*\033[0m     \033[1;33m,MMM8&&&.\033[0m            \033[1;35m*\033[0m" << std::endl;
	std::cout << "                  \033[1;33mMMMM88&&&&&\033[0m    \033[1;33m.\033[0m" << std::endl;
	std::cout << "                 \033[1;33mMMMM88&&&&&&&\033[0m" << std::endl;
	std::cout << "     \033[1;33m*\033[0m           \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33m'MMM88&&&&&&'\033[0m" << std::endl;
	std::cout << "                   \033[1;33m'MMM8&&&'\033[0m      \033[1;36m*\033[0m" << std::endl;
	std::cout << "          \033[1;30m|\\___/|\033[0m" << std::endl;
	std::cout << "         \033[1;30m=) ^Y^ (=\033[0m            \033[1;33m.\033[0m              \033[1;33m'\033[0m" << std::endl;
	std::cout << "          \033[1;30m\\  ^  /\033[0m" << std::endl;
	std::cout << "           \033[1;30m)\033[1m\033[1;31m=*=\033[0m\033[1;30m(\033[0m       \033[1;35m*\033[0m" << std::endl;
	std::cout << "          \033[1;30m/     \\\033[0m" << std::endl;
	std::cout << "          \033[1;30m|     |\033[0m" << std::endl;
	std::cout << "         \033[1;30m/| | | |\\\033[0m" << std::endl;
	std::cout << "         \033[1;30m\\| | |_|/\\\033[0m" << std::endl;
	std::cout << "  \033[1;32mjgs_/\\_\033[0m\033[1;30m//_// ___/\\\033[0m\033[1;32m_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_\033[0m" << std::endl;
	std::cout << "  \033[1;42m|  |  |  | \\_) |  |  |  |  |  |  |  |  |  |\033[0m" << std::endl;
	std::cout << "  \033[1;42m|  |  |  |  |  |  |  |  |  |  |  |  |  |  |\033[0m" << std::endl;
	std::cout << "  \033[1;42m|  |  |  |  |  |  |  |  |  |  |  |  |  |  |\033[0m" << std::endl;
	std::cout << "  \033[1;42m|  |  |  |  |  |  |  |  |  |  |  |  |  |  |\033[0m" << std::endl;
	std::cout << "  \033[1;42m|  |  |  |  |  |  |  |  |  |  |  |  |  |  |\033[0m" << std::endl;
	std::cout << std::endl;
}
// Maybe only sky colours and rest white again (schlicht)

int	main(void)
{
	PhoneBook	phoneBook;
	int			index;
	std::string	command;

	print_cat_hello();
	std::cout << "Welcome to your <Awesome PhoneBook™>." << std::endl;
	std::cout << "We provide you with the unbelievable technology of the 80s!" << std::endl;
	
	std::cout << "[ADD]		Save a new contact." << std::endl;
	std::cout << "[SEARCH]	Display a specific contact." << std::endl;
	std::cout << "[EXIT]		Quit the program. WARNING! All contacts are lost forever!" << std::endl;
	index = 0;
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
		if (index == 25)
			phoneBook.setLoopStatus(false);
		index++;
		std::cin.clear();
	}
	print_cat_goodbye();
	return (0);
}

