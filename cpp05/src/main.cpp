/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:37:48 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/31 20:58:50 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main(void)
{
	std::cout << "--- CONSTRUCTING BUREAUCRATS WITH INVALID GRADES ---" << std::endl;
	{
		try
		{
			Bureaucrat john("John", -50);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			Bureaucrat matilda("Matilda", 170);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "--- CHANGING GRADES BEYOND LIMITS ---" << std::endl;
	{
		// WHY CALLING DESTRUCTOR SO EARLY?
		try
		{
			Bureaucrat angela("Angela", 1);

			angela.incrementGrade();
			angela.decrementGrade();
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			Bureaucrat leopold("Leopold", 150);

			leopold.decrementGrade();
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "--- CORRECT CHANGING BEHAVIOUR ---" << std::endl;
	try
	{
		Bureaucrat *john = new Bureaucrat("John", 150);
		Bureaucrat *obama = new Bureaucrat("Obama", 1);
		std::cout << std::endl;

		std::cout << *john;
		for (int i = 0; i < 5; i++)
			john->incrementGrade();
		std::cout << *john;

		std::cout << std::endl;

		std::cout << *obama;
		for (int i = 0; i < 3; i++)
			obama->decrementGrade();
		std::cout << *obama;

		std::cout << std::endl;

		delete john;
		delete obama;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// system("leaks bureaucrat");
	return (0);
}
