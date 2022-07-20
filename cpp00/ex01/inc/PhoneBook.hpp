/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:35:29 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/20 20:50:20 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "../inc/Contact.hpp"

class PhoneBook
{
private:
	Contact		_contacts[8];
	int			_contactCountTotal;
	int			_contactCount;
	bool		_loopStatus;

	std::string	_getFieldInput(std::string field) const;
	bool		_checkFieldInput(std::string input) const;
	void		_printEntries(void) const;
	std::string	_truncateField(std::string field) const;
	void		_displayEntry(void) const;
	bool		_checkRange(int entryIndex, int entryLimit) const;
public:
	PhoneBook(void);
	~PhoneBook(void);

	void		printWelcomeMessage(void) const;
	void		printGoodbyeMessage(void) const;
	void		addContact(void);
	void		searchContact(void) const;
	void		exit(void);

	void		setLoopStatus(bool boolean);
	void		incrementContactTotalCount(void);
	void		incrementContactCount(void);

	bool		getLoopStatus(void) const;
	int			getContactTotalCount(void) const;
	int			getContactCount(void) const;
};
