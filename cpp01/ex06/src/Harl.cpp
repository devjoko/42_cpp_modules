/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:00:14 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 19:39:04 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Harl.hpp"

/*	CONSTRUCTOR	*/
Harl::Harl()
{
	std::cout << "Harl enters the burger restaurant." << std::endl;
	std::cout << std::endl;
	std::cout << "( ͡° ͜ʖ ͡°)\t\"Hi! I'd like to order a burger!" << std::endl;
	return ;
}

/*	DESTRUCTOR	*/
Harl::~Harl()
{
	std::cout << std::endl;
	std::cout << "⌐(ಠ۾ಠ)╯︵ ┻━┻" << std::endl;
	std::cout << "Harl has left the burger restaurant." << std::endl;
	return ;
}

/*	PRIVATE MEMBER FUNCTIONS	*/
void	Harl::debug( void )
{
	std::cout << std::endl;
	std::cout << "[ DEBUG ] ( ͡° ͜ʖ ͡°)" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << std::endl;
	std::cout << "[ INFO ] (ಠ_ಠ)" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << std::endl;
	std::cout << "[ WARNING ] ⌐(ಠ۾ಠ)¬" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << std::endl;
	std::cout << "[ ERROR ] (╯°□°）╯︵ ┻━┻" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

/*	PUBLIC MEMBER FUNCTIONS	*/
void	Harl::complain( std::string level )
{
	std::string	complaints[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void		(Harl::*func_ptr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	int			index = -1;

	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
		{
			index = i;
			break ;
		}
	}

	switch (index)
	{
		case 0:
			(this->*func_ptr[0])();
		case 1:
			(this->*func_ptr[1])();
		case 2:
			(this->*func_ptr[2])();
		case 3:
			(this->*func_ptr[3])();
			break ;
		default:
			std::cout << std::endl;
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
