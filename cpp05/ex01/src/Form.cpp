/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:56:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 13:08:37 by jpfuhl           ###   ########.fr       */
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

Form::Form(std::string name, int signGrade, int execGrade)
: _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	std::cout << "Constructing Form \"" << name << "\" with sign grade " << signGrade << " and exec grade " << execGrade << "." << std::endl;

	if (signGrade < 1 || execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form & rhs)
: _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade), _isSigned(rhs._isSigned)
{
	std::cout << "Copy Constructing Form from ... ?" << std::endl;
}

Form & Form::operator=(const Form & rhs) // this is weird
{
	std::cout << "Copy Assignment Operator Form" << std::endl;
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
		// rest not posible because constant?
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor Form \"" << _name << "\"." << std::endl;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Form::beSigned(Bureaucrat * bureaucrat)
{
	if (bureaucrat->getGrade() > _signGrade)
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

std::ostream & operator<<(std::ostream & out, const Form & obj)
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
