/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:00:14 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:18:30 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

/* ************************************************************************** */
/*                                  Harl Class                                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                 Class Form                                 */
/* ************************************************************************** */

Harl::Harl()
{
	std::cout << "( ͡° ͜ʖ ͡°)" << std::endl;
	std::cout << "Harl enters the burger restaurant." << std::endl;
	std::cout << "Hi! I'd like to order a burger!" << std::endl;
	std::cout << std::endl;
}

Harl::~Harl()
{
	std::cout << "⌐(ಠ۾ಠ)╯︵ ┻━┻" << std::endl;
	std::cout << "Harl has left the burger restaurant." << std::endl;
}

/* ************************************************************************** */
/*                          Private Member Functions                          */
/* ************************************************************************** */

void Harl::debug(void)
{
	std::cout << "( ͡° ͜ʖ ͡°)" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "(ಠ_ಠ)" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "⌐(ಠ۾ಠ)¬" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "(╯°□°）╯︵ ┻━┻" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

/* ************************************************************************** */
/*                          Public Member Functions                           */
/* ************************************************************************** */

void	Harl::complain(std::string level)
{
	std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
			(this->*func_ptr[i])();
	}
}

/* ************************************************************************** */
/*                                  Harl Class                                */
/* ************************************************************************** */
