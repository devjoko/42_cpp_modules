/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:37:48 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 13:06:19 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main(void)
{
	std::cout << "\033[1;33m--- CONSTRUCTING FORM WITH INVALID GRADES ---\033[0m" << std::endl;
	{
		try
		{
			Form tax("Tax", -50, 100);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			Form health("Health Insurance", 20, 160);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "\033[1;33m--- TRYING TO SIGN WITH INVALID SIGN GRADE ---\033[0m" << std::endl;
	{
		try
		{
			Bureaucrat angela("Angela", 2);
			Form embargo("Embargo", 1, 1);

			angela.signForm(embargo);
			angela.incrementGrade();
			angela.signForm(embargo);
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "\033[1;33m--- CORRECT BEHAVIOUR DEMONSTRATION ---\033[0m" << std::endl;
	try
	{
			Bureaucrat mattilda("Mattilda", 47);
			Form tax("Tax", 76, 76);

			std::cout << mattilda;
			std::cout << tax;

			mattilda.signForm(tax);
			std::cout << tax;

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
