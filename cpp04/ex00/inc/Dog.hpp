/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 22:49:27 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

/* ************************************************************************** */
/*                                    Dog Class                               */
/* ************************************************************************** */

class	Dog : public Animal
{
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &copy);
	Dog	&operator=(const Dog &assign);
	~Dog();

	void	makeSound(void) const;
};

#endif /* DOG_H */
