/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:11:49 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 16:44:56 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */

class FragTrap : virtual public ClapTrap
{
protected:
	const unsigned int _fragHp;
	const unsigned int _fragEn;
	const unsigned int _fragDmg;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& rhs);
	~FragTrap();

	FragTrap& operator=(const FragTrap& rhs);

	void highFivesGuys(void);
};

std::ostream& operator<<(std::ostream& out, const FragTrap& obj);

#endif /* FRAGTRAP_H */
