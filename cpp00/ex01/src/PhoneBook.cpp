/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:35:23 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/21 22:34:21 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../inc/PhoneBook.hpp"

/*	CONSTRUCTOR	*/
PhoneBook::PhoneBook(void)
{
	this->_contactCountTotal = 0;
	this->_contactCount = 0;
	this->_loopStatus = true;
	return ;
}

/*	DESTRUCTOR	*/
PhoneBook::~PhoneBook(void)
{
	return ;
}

/*	METHODS	*/
void	PhoneBook::printWelcomeMessage(void) const
{
	std::cout << std::endl;
	std::cout << "             \033[1;36m*\033[0m     \033[1;33m,MMM8&&&.\033[0m            \033[1;35m*\033[0m" << std::endl;
	std::cout << "                  \033[1;33mMMMM88&&&&&\033[0m    \033[1;33m.\033[0m" << std::endl;
	std::cout << "                 \033[1;33mMMMM88&&&&&&&\033[0m" << std::endl;
	std::cout << "     \033[1;33m*\033[0m           \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33m'MMM88&&&&&&'\033[0m" << std::endl;
	std::cout << "                   \033[1;33m'MMM8&&&'\033[0m      \033[1;36m*\033[0m" << std::endl;
	std::cout << "          |\\___/|" << std::endl;
	std::cout << "         =) ^Y^ (=            \033[1;33m.\033[0m              \033[1;33m'\033[0m" << std::endl;
	std::cout << "          \\  ^  /" << std::endl;
	std::cout << "           )=*=(       \033[1;35m*\033[0m" << std::endl;
	std::cout << "          /     \\" << std::endl;
	std::cout << "          |     |" << std::endl;
	std::cout << "         /| | | |\\" << std::endl;
	std::cout << "         \\| | |_|/\\" << std::endl;
	std::cout << "  jgs_/\\_//_// ___/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_" << std::endl;
	std::cout << "  |  |  |  | \\_) |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << "  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |" << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to your <Awesome PhoneBook™>." << std::endl;
	std::cout << "We provide you with the unbelievable technology of the 80s!" << std::endl;
	std::cout << std::endl;
	std::cout << "[ADD]		Save a new contact." << std::endl;
	std::cout << "[SEARCH]	Display a specific contact." << std::endl;
	std::cout << "[EXIT]		Quit the program. WARNING! All contacts are lost forever!" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::printGoodbyeMessage(void) const
{
	std::cout << std::endl;
	std::cout << "We hope you enjoyed your <Awesome PhoneBook™>." << std::endl;
	std::cout << "Until next time!" << std::endl;
	std::cout << std::endl;
	std::cout << "             \033[1;36m*\033[0m     \033[1;33m,MMM8&&&.\033[0m            \033[1;35m*\033[0m" << std::endl;
	std::cout << "                  \033[1;33mMMMM88&&&&&\033[0m    \033[1;33m.\033[0m" << std::endl;
	std::cout << "                 \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "     \033[1;33m*\033[0m           \033[1;33mMM88&&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33mMMM88&&&&&&&&\033[0m" << std::endl;
	std::cout << "                 \033[1;33m'MMM88&&&&&&'\033[0m" << std::endl;
	std::cout << "                   \033[1;33m'MMM8&&&'\033[0m      \033[1;36m*\033[0m" << std::endl;
	std::cout << "          |\\___/|" << std::endl;
	std::cout << "          )     (             \033[1;33m.\033[0m              \033[1;33m'\033[0m" << std::endl;
	std::cout << "         =\\     /=" << std::endl;
	std::cout << "           )===(       \033[1;35m*\033[0m" << std::endl;
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

bool	PhoneBook::_checkFieldInput(std::string input) const
{
	if (input == "")
		return (false);
	return (true);
}

std::string	PhoneBook::_getFieldInput(std::string field) const
{
	bool		isValid;
	std::string	input;

	isValid = false;
	while (!isValid)
	{
		std::cout << "Please enter a " << field << " > ";
		std::getline(std::cin, input);
		isValid = _checkFieldInput(input);
	}
	return (input);
}

void	PhoneBook::addContact(void)
{
	int	i;

	i = this->getContactTotalCount() % 8;
	this->_contacts[i].setFirstName(this->_getFieldInput("first name"));
	this->_contacts[i].setLastName(this->_getFieldInput("last name"));
	this->_contacts[i].setNickname(this->_getFieldInput("nickname"));
	this->_contacts[i].setPhoneNumber(this->_getFieldInput("phone number"));
	this->_contacts[i].setDarkestSecret(this->_getFieldInput("darkest secret"));
	this->incrementContactTotalCount();
	if (this->getContactCount() < 8)
		this->incrementContactCount();
}

bool	PhoneBook::_checkRange(int entryIndex, int entryLimit) const
{
	if (1 <= entryIndex && entryIndex <= entryLimit)
		return (true);
	return (false);
}

void	PhoneBook::_displayEntry(void) const
{
	bool		inRange;
	int			limit;
	std::string	input;
	int			index;

	inRange = false;
	limit = this->getContactCount();
	while (!inRange)
	{
		std::cout << "Please enter the index of the entry to display [1 - " << limit << "] > ";
		std::getline(std::cin, input);
		try
		{
			if (input.length() > 1)
				continue ;
			index = stoi(input);
		}
		catch (...)
		{
			continue ;
		}
		inRange = this->_checkRange(index, limit);
		if (inRange)
		{
			std::cout << "First Name: " << this->_contacts[index - 1].getFirstName() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << this->_contacts[index - 1].getNickname() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index - 1].getDarkestSecret() << std::endl;
		}
	}
}

std::string	PhoneBook::_truncateField(std::string field) const
{
	size_t	length;

	length = field.length();
	if (length > 10)
		return (field.substr(0,9) + ".");
	return (field);
}

void	PhoneBook::_printEntries(void) const
{
	for (int i = 0; i < this->getContactCount(); i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << _truncateField(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << _truncateField(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << _truncateField(this->_contacts[i].getNickname()) << std::endl;
	}
}

void	PhoneBook::searchContact(void) const
{
	if (this->getContactTotalCount() == 0)
	{
		std::cout << "Your PhoneBook is currently empty." << std::endl;
		return ;
	}
	this->_printEntries();
	this->_displayEntry();
}

void	PhoneBook::exit(void)
{
	this->setLoopStatus(false);
	this->printGoodbyeMessage();
}

/*	SETTER	*/
void	PhoneBook::setLoopStatus(bool boolean)
{
	this->_loopStatus = boolean;
}

void	PhoneBook::incrementContactTotalCount(void)
{
	this->_contactCountTotal += 1;
}

void	PhoneBook::incrementContactCount(void)
{
	this->_contactCount += 1;
}

/*	GETTER	*/
bool	PhoneBook::getLoopStatus(void) const
{
	return (this->_loopStatus);
}

int	PhoneBook::getContactTotalCount(void) const
{
	return (this->_contactCountTotal);
}

int	PhoneBook::getContactCount(void) const
{
	return (this->_contactCount);
}
