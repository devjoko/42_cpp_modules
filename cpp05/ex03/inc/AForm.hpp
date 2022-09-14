/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:56:41 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 13:26:19 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef A_FORM_H
# define A_FORM_H

# include <iostream>
# include <string>
# include <stdexcept>

/* ************************************************************************** */
/*                                   AForm Class                               */
/* ************************************************************************** */

class Bureaucrat;

class AForm
{
protected:
	const std::string _name;
	const std::string _target;
	const int _signGrade;
	const int _execGrade;
	bool _isSigned;
public:
	AForm();
	AForm(std::string name, std::string target, int signGrade, int execGrade);
	AForm(const AForm& rhs);
	virtual ~AForm();

	AForm& operator=(const AForm& rhs);

	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(const Bureaucrat& executor) const = 0;

	std::string getName(void) const;
	std::string getTarget(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;
	bool getSignStatus(void) const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("grade is too high!");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("grade is too low!");
		}
	};
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif /* A_FORM_H */
