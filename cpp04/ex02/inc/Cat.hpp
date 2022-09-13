/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 17:33:04 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                                    Cat Class                               */
/* ************************************************************************** */

class Cat : public AAnimal
{
private:
	Brain* _brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	~Cat();

	Cat& operator=(const Cat& rhs);

	void makeSound(void) const;
	void printBrain(void);
};

#endif /* CAT_H */
