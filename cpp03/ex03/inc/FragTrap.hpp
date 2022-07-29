/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:11:49 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 18:25:17 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */

class	FragTrap : virtual public ClapTrap
{
protected:
	const unsigned int	_fragHp;
	const unsigned int	_fragEn;
	const unsigned int	_fragDmg;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	FragTrap	&operator=(const FragTrap &assign);
	~FragTrap();

	void	highFivesGuys(void);
};

std::ostream	&operator<<(std::ostream &o, const FragTrap &obj);

#endif /* FRAGTRAP_H */