/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:22:17 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 19:19:08 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"

/* ************************************************************************** */
/*                        PresidentialPardonForm Class                        */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

PresidentialPardonForm::PresidentialPardonForm()
: AForm("Presidential Pardon Form", "Default", 25, 5)
{
	std::cout << "Default Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("Presidential Pardon Form", target, 25, 5)
{
	std::cout << "Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
: AForm(rhs)
{
	std::cout << "Copy Constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << "Copy Assignment Operator PresidentialPardonForm" << std::endl;
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getExecGrade())
	{
		throw (AForm::GradeTooLowException());
	}
	else
	{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}

/* ************************************************************************** */
/*                        PresidentialPardonForm Class                        */
/* ************************************************************************** */
