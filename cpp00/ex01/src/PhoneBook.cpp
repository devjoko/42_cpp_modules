/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:35:23 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/18 21:07:26 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/PhoneBook.hpp"

/*	CONSTRUCTOR	*/
PhoneBook::PhoneBook(void)
{
	std::cout << "PHONEBOOK Constructor called" << std::endl;
	this->_numberOfContacts = 0;
	this->_loopStatus = true;
	return ;
}

/*	DESTRUCTOR	*/
PhoneBook::~PhoneBook(void)
{
	std::cout << "PHONEBOOK Deconstructor called" << std::endl;
	return ;
}

/*	METHODS	*/
void	PhoneBook::addContact(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "Please enter a first name: ";
	std::cin >> firstName;
	std::cout << "Please enter a last name: ";
	std::cin >> lastName;
	std::cout << "Please enter a nickname: ";
	std::cin >> nickname;
	std::cout << "Please enter a phone number: ";
	std::cin >> phoneNumber;
	std::cout << "Please enter a darkest secret: ";
	std::cin >> darkestSecret;

	// can't have empty fields => strlen == 0?
	
	
}

void	PhoneBook::searchContact(void) const
{
	
}

void	PhoneBook::exit(void) const
{
	this->~PhoneBook();
}

void	PhoneBook::incrementNumberOfContacts(void)
{
	this->_numberOfContacts += 1;
}




/*	SETTER	*/
void	PhoneBook::setLoopStatus(bool boolean)
{
	this->_loopStatus = boolean;
}

/*	GETTER	*/
bool	PhoneBook::getLoopStatus(void) const
{
	return (this->_loopStatus);
}
