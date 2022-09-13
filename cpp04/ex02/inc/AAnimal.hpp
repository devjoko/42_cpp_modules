/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 17:51:01 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef A_ANIMAL_H
# define A_ANIMAL_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                 AAnimal Class                              */
/* ************************************************************************** */

class AAnimal
{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& rhs);
	virtual ~AAnimal();

	AAnimal& operator=(const AAnimal& rhs);

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
};

#endif /* A_ANIMAL_H */
