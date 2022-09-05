/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:57:55 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 21:59:57 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                HumanB Class                                */
/* ************************************************************************** */

class Weapon;

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void attack(void) const;

	void setWeapon(Weapon& weapon);
};

#endif /* HUMAN_B_H */
