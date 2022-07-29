/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:24:14 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 02:37:59 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

/* ************************************************************************** */
/*                                DiamondTrap Class                           */
/* ************************************************************************** */

class	DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap	&operator=(const DiamondTrap &assign);
	~DiamondTrap();

	void	attack(const std::string &target);
	void	whoAmI(void);
};

std::ostream	&operator<<(std::ostream &o, const DiamondTrap &obj);

#endif /* DIAMONDTRAP_H */