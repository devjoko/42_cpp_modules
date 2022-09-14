/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:37:48 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 20:56:54 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Intern.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "\033[1;33m--- INTERN CREATES FORMS---\033[0m" << std::endl;
	{
		try
		{
			Intern someRandomIntern;
			AForm* robotomy;
			AForm* shrubbery;
			AForm* pardon;

			robotomy = someRandomIntern.makeForm("robotomy request", "Bender");
			shrubbery = someRandomIntern.makeForm("shrubbery creation", "Oakville");
			pardon = someRandomIntern.makeForm("presidential pardon", "Lucy");

			delete robotomy;
			delete shrubbery;
			delete pardon;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "\033[1;33m--- INVALID FORM ---\033[0m" << std::endl;
	{
		try
		{
			Intern someRandomIntern;
			AForm* invalid;

			invalid = someRandomIntern.makeForm("q@#1ads123!", "Bender");

			delete invalid;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
