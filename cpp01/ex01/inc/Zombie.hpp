/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:24:28 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:34:39 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                Zombie Class                                */
/* ************************************************************************** */

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();

	void announce(void);

	void setName(std::string name);
	std::string getName(void) const;
};

Zombie* zombieHorde(int N, std::string name);

#endif /* ZOMBIE_H */
