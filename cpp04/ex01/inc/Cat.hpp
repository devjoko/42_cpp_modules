/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/04 20:43:09 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                                    Cat Class                               */
/* ************************************************************************** */

class	Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &copy);
	Cat	&operator=(const Cat &assign);
	~Cat();

	void	makeSound(void) const;
	void	printBrain(void);
};

#endif /* CAT_H */
