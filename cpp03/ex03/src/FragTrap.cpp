/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:45:44 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 19:02:23 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

FragTrap::FragTrap() : ClapTrap(), _fragHp(100), _fragEn(100), _fragDmg(30)
{
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_maxHitpoints = 100;
	std::cout << "A default FragTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _fragHp(100), _fragEn(100), _fragDmg(30)
{
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_maxHitpoints = 100;
	std::cout << "FragTrap " << name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &copy) : _fragHp(100), _fragEn(100), _fragDmg(30)
{
	std::cout << "FragTrap has been copy constructed from " << copy.getName() << "." << std::endl;
	std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = copy;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &assign)
{
	if (this != &assign)
	{
		std::cout << "FragTrap has been assigned from " << assign.getName() << "." << std::endl;
		std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = assign.getName();
		this->_hitpoints = assign.getHitpoints();
		this->_energy = assign.getEnergy();
		this->_damage = assign.getDamage();
		this->_maxHitpoints = assign.getMaxHitpoints();
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;35mc[x┬x]כ  Argh arghargh death gurgle gurglegurgle urgh... death.\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " raises hand." << std::endl;
	std::cout << "\t\033[1;35mc[ò┬ó]כ  Gimme five!\033[0m" << std::endl;
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, const FragTrap &obj)
{
	o << "FragTrap " << obj.getName() << ": Fetching parameters!";
	o << "\tHP: " << obj.getHitpoints();
	o << "\tEN: " << obj.getEnergy();
	o << "\tAD: " << obj.getDamage() << std::endl;
	o << "\t\033[1;35mc[○┬●]כ Step right up, to the Bulletnator 9000!\033[0m" << std::endl;
	o << std::endl;
	return (o);
}

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */
