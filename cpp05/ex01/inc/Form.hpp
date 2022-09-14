/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:56:41 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 18:24:31 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include <stdexcept>

/* ************************************************************************** */
/*                                   Form Class                               */
/* ************************************************************************** */

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _signGrade;
	const int _execGrade;
	bool _isSigned;
public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form& rhs);
	~Form();

	Form& operator=(const Form& rhs);

	void beSigned(const Bureaucrat& bureaucrat);

	std::string getName(void) const;
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

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif /* FORM_H */
