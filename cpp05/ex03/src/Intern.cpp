/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:53:21 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 20:55:54 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/*                                 Intern Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Intern::Intern()
{
	std::cout << "Default Constructor Intern" << std::endl;
}

Intern::Intern(const Intern& rhs)
{
	std::cout << "Copy Constructor Intern" << std::endl;
	*this = rhs;
}

Intern::~Intern()
{
	std::cout << "Destructor Intern" << std::endl;
}

Intern& Intern::operator=(const Intern& rhs)
{
	std::cout << "Copy Assignment Operator Intern" << std::endl;
	if (this != &rhs) {}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

AForm* Intern::makeForm(const std::string form, const std::string target) const
{
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm* createdForm = NULL;
	int i = -1;

	for (int j = 0; j < 3; j++)
	{
		if (form == forms[j])
		{
			std::cout << "Intern creates " << form << std::endl;
			i = j;
			break ;
		}
	}

	switch (i)
	{
		case 0:
			createdForm = new PresidentialPardonForm(target);
			break;
		case 1:
			createdForm = new RobotomyRequestForm(target);
			break;
		case 2:
			createdForm = new ShrubberyCreationForm(target);
			break;
		default:
			std::cout << "Form \"" << form << "\" doesn't exist" << std::endl;
			throw (Intern::FailedFormCreation());
	}

	return (createdForm);
}

/* ************************************************************************** */
/*                                 Intern Class                               */
/* ************************************************************************** */
