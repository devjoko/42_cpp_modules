/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/22 16:33:30 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                 AAnimal Class                              */
/* ************************************************************************** */

class	AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &rhs);
	AAnimal	&operator=(const AAnimal &rhs);
	virtual ~AAnimal();

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif /* AANIMAL_H */
