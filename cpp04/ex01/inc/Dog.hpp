/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 22:07:23 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                                    Dog Class                               */
/* ************************************************************************** */

class	Dog : public Animal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &copy);
	Dog	&operator=(const Dog &assign);
	~Dog();

	void	makeSound(void) const;
};

#endif /* DOG_H */
