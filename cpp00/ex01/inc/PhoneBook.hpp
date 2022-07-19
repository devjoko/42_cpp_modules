/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:35:29 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/19 15:31:21 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../inc/Contact.hpp"

class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_numberOfContacts;
	bool	_loopStatus;
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void) const;
	void	exit(void);

	void	incrementNumberOfContacts(void);
	// void	setNumberOfContacts(int);
	// int		getNumberOfContacts(void) const;
	void	setLoopStatus(bool boolean);
	bool	getLoopStatus(void) const;
};
