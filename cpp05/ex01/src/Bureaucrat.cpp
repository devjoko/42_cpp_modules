/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:20:03 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 13:07:20 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

/* ************************************************************************** */
/*                               Bureaucrat Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name), _grade(grade)
{
	std::cout << "Constructing Bureaucrat " << name << " with grade " << grade << "." << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs)
: _name(rhs._name), _grade(rhs._grade)
{
	std::cout << "Copy Constructor Bureaucrat" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
	std::cout << "Copy Assignment Operator Bureaucrat" << std::endl;
	if (this != &rhs)
	{
		// this->_name = rhs._name; not possible
		this->_grade = rhs._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat "<< _name << std::endl;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Bureaucrat::incrementGrade(void)
{
	std::cout << "Increment Grade" << std::endl;
	if (_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		_grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
	std::cout << "Decrement Grade" << std::endl;
	if (_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade += 1;
}

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream & operator<<(std::ostream & out, const Bureaucrat & obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                               Bureaucrat Class                             */
/* ************************************************************************** */
