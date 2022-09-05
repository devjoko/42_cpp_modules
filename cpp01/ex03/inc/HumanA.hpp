/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:57:55 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 21:48:15 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                HumanA Class                                */
/* ************************************************************************** */

class Weapon;

class HumanA
{
private:
	std::string _name;
	Weapon& _weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack(void) const;
};

#endif /* HUMAN_A_H */
