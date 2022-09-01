/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:09:29 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 17:48:46 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_H
# define  BUREAUCRAT_H

# include <iostream>
# include <string>
# include <stdexcept>

/* ************************************************************************** */
/*                               Bureaucrat Class                             */
/* ************************************************************************** */

class AForm;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

	Bureaucrat();
	Bureaucrat & operator=(const Bureaucrat & rhs);
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & rhs);
	~Bureaucrat();

	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(AForm & form);
	void executeForm(AForm const & form);

	std::string getName(void) const;
	int getGrade(void) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("EXCEPTION: Grade too high! (1 is highest possible grade)");
		}
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("EXCEPTION: Grade too low! (150 is lowest possible grade)");
		}
	};
};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & obj);

#endif /* BUREAUCRAT_H */
