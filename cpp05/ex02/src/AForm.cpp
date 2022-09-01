/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:56:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 17:45:42 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"

/* ************************************************************************** */
/*                                  AForm Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

AForm::AForm(std::string name, std::string target, int signGrade, int execGrade)
: _name(name), _target(target), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	std::cout << "Constructor AForm" << std::endl;

	if (signGrade < 1 || execGrade < 1)
		throw (AForm::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm & rhs)
: _name(rhs._name), _target(rhs._target), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade), _isSigned(rhs._isSigned)
{
	std::cout << "Copy Constructor AForm" << std::endl;
}

AForm::~AForm()
{
	std::cout << "Destructor AForm" << std::endl;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw (AForm::GradeTooLowException());
	else
		_isSigned = true;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string AForm::getName(void) const
{
	return (_name);
}

std::string AForm::getTarget(void) const
{
	return (_target);
}

int AForm::getSignGrade(void) const
{
	return (_signGrade);
}

int AForm::getExecGrade(void) const
{
	return (_execGrade);
}

bool AForm::getSignStatus(void) const
{
	return (_isSigned);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream & operator<<(std::ostream & out, const AForm & obj)
{
	out << "AForm \"" << obj.getName() << "\"" << std::endl;
	out << "Target: " << obj.getTarget() << std::endl;
	out << "Sign grade: " << obj.getSignGrade() << std::endl;
	out << "Exec grade: " << obj.getExecGrade() << std::endl;
	out << "Is signed: " << obj.getSignStatus() << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                  AForm Class                               */
/* ************************************************************************** */
