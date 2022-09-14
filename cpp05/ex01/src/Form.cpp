/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:56:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 18:32:41 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

/* ************************************************************************** */
/*                                   Form Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Form::Form()
: _name("Default"), _signGrade(75), _execGrade(75), _isSigned(false)
{
	std::cout << "Default Constructor Form" << std::endl;

	if (_signGrade < 1 || _execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (_signGrade > 150 || _execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(std::string name, int signGrade, int execGrade)
: _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	std::cout << "Constructing Form \"" << name << "\" with sign grade " << signGrade << " and exec grade " << execGrade << std::endl;

	if (signGrade < 1 || execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form& rhs)
: _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade), _isSigned(rhs._isSigned)
{
	std::cout << "Copy Constructor Form" << std::endl;

	if (_signGrade < 1 || _execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (_signGrade > 150 || _execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::~Form()
{
	std::cout << "Destructor Form " << _name << std::endl;
}

Form& Form::operator=(const Form& rhs)
{
	std::cout << "Copy Assignment Operator Form" << std::endl;
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw (Form::GradeTooLowException());
	else
		_isSigned = true;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string Form::getName(void) const
{
	return (_name);
}

int Form::getSignGrade(void) const
{
	return (_signGrade);
}

int Form::getExecGrade(void) const
{
	return (_execGrade);
}

bool Form::getSignStatus(void) const
{
	return (_isSigned);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	out << "Form \"" << obj.getName() << "\"" << std::endl;
	out << "Sign grade: " << obj.getSignGrade() << std::endl;
	out << "Exec grade: " << obj.getExecGrade() << std::endl;
	out << "Is signed: " << obj.getSignStatus() << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                   Form Class                               */
/* ************************************************************************** */
