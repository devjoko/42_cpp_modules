/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/04 21:05:40 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                                    Dog Class                               */
/* ************************************************************************** */

class	Dog : public AAnimal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &rhs);
	Dog	&operator=(const Dog &rhs);
	~Dog();

	void	makeSound(void) const;
};

#endif /* DOG_H */
