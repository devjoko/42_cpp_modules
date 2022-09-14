/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:22:02 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 19:28:39 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/RobotomyRequestForm.hpp"

/* ************************************************************************** */
/*                         RobotomyRequestForm Class                          */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

RobotomyRequestForm::RobotomyRequestForm()
: AForm("Robotomy Request Form", "Default", 72, 45)
{
	std::cout << "Default Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("Robotomy Request Form", target, 72, 45)
{
	std::cout << "Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
: AForm(rhs)
{
	std::cout << "Copy Constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << "Copy Assignment Operator RobotomyRequestForm" << std::endl;
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	std::cout << "Makes some drilling noises." << std::endl;
	if (executor.getGrade() > this->getExecGrade())
	{
		std::cout << "Robotomy failed." << std::endl;
		throw (AForm::GradeTooLowException());
	}
	else
	{
		std::cout << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
	}
}

/* ************************************************************************** */
/*                         RobotomyRequestForm Class                          */
/* ************************************************************************** */
