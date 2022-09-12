/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:45:44 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 17:11:21 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

FragTrap::FragTrap()
: ClapTrap(), _fragHp(100), _fragEn(100), _fragDmg(30)
{
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_maxHitpoints = 100;
	std::cout << "A default FragTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name), _fragHp(100), _fragEn(100), _fragDmg(30)
{
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_maxHitpoints = 100;
	std::cout << "FragTrap " << name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs)
: _fragHp(100), _fragEn(100), _fragDmg(30)
{
	std::cout << "FragTrap has been copy constructed from " << rhs._name << "." << std::endl;
	std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;35mc[x┬x]כ  Argh arghargh death gurgle gurglegurgle urgh... death.\033[0m" << std::endl;
	std::cout << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		std::cout << "FragTrap has been assigned from " << rhs._name << "." << std::endl;
		std::cout << "\t\033[1;35mc[○┬●]כ Recompiling my combat code!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
		this->_maxHitpoints = rhs._maxHitpoints;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " raises hand." << std::endl;
	std::cout << "\t\033[1;35mc[ò┬ó]כ  Gimme five!\033[0m" << std::endl;
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const FragTrap& obj)
{
	out << "FragTrap " << obj.getName() << ": Fetching parameters!";
	out << "\tHP: " << obj.getHitpoints();
	out << "\tEN: " << obj.getEnergy();
	out << "\tAD: " << obj.getDamage() << std::endl;
	out << "\t\033[1;35mc[○┬●]כ Step right up, to the Bulletnator 9000!\033[0m" << std::endl;
	out << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */
