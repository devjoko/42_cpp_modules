/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:37:48 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 17:42:34 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "\033[1;33m--- SHRUBBERY-CREATION-FORM ---\033[0m" << std::endl;
	{
		try
		{
			std::cout << "\033[1;34mCONSTRUCTING ...\033[0m" << std::endl;
			Bureaucrat mattilda("Mattilda", 140);
			Bureaucrat angela("Angela", 1);
			AForm *form = new ShrubberyCreationForm("Village");

			std::cout << "\033[1;34mBUREAUCRATS ...\033[0m" << std::endl;
			std::cout << mattilda;
			std::cout << angela;

			std::cout << "\033[1;34mFORM ...\033[0m" << std::endl;
			std::cout << *form;

			std::cout << "\033[1;34mEXECUTING ...\033[0m" << std::endl;
			mattilda.signForm(*form);
			mattilda.executeForm(*form);
			angela.executeForm(*form);

			std::cout << "\033[1;34mDESTRUCTING ...\033[0m" << std::endl;
			delete form;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	std::cout << "\033[1;33m--- ROBOTOMY-REQUEST-FORM ---\033[0m" << std::endl;
	{
		try
		{
			std::cout << "\033[1;34mCONSTRUCTING ...\033[0m" << std::endl;
			Bureaucrat john("John", 46);
			AForm *form = new RobotomyRequestForm("Eddy");

			std::cout << "\033[1;34mBUREAUCRAT ...\033[0m" << std::endl;
			std::cout << john;
			
			std::cout << "\033[1;34mFORM ...\033[0m" << std::endl;
			std::cout << *form;

			std::cout << "\033[1;34mEXECUTING ...\033[0m" << std::endl;
			john.executeForm(*form);
			john.incrementGrade();
			john.executeForm(*form);

			std::cout << "\033[1;34mDESTRUCTING ...\033[0m" << std::endl;
			delete form;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	std::cout << "\033[1;33m--- PRESIDENTIAL-PARDON-FORM ---\033[0m" << std::endl;
	{
		try
		{
			std::cout << "\033[1;34mCONSTRUCTING ...\033[0m" << std::endl;
			Bureaucrat trump("Donald Trump", 5);
			AForm *form = new PresidentialPardonForm("Melanie");

			std::cout << "\033[1;34mBUREAUCRAT ...\033[0m" << std::endl;
			std::cout << trump;
			
			std::cout << "\033[1;34mFORM ...\033[0m" << std::endl;
			std::cout << *form;

			std::cout << "\033[1;34mEXECUTING ...\033[0m" << std::endl;
			trump.executeForm(*form);
			trump.decrementGrade();
			trump.executeForm(*form);

			std::cout << "\033[1;34mDESTRUCTING ...\033[0m" << std::endl;
			delete form;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
