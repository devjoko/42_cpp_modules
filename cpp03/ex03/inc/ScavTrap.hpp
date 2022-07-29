/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:24:14 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 18:25:20 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

/* ************************************************************************** */
/*                                 ScavTrap Class                             */
/* ************************************************************************** */

class	ScavTrap : virtual public ClapTrap
{
protected:
	const unsigned int	_scavHp;
	const unsigned int	_scavEn;
	const unsigned int	_scavDmg;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap	&operator=(const ScavTrap &assign);
	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate(void);
};

std::ostream	&operator<<(std::ostream &o, const ScavTrap &obj);

#endif /* SCAVTRAP_H */