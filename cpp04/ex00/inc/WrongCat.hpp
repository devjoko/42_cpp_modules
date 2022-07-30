/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/30 17:23:11 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

/* ************************************************************************** */
/*                                  WrongCat Class                            */
/* ************************************************************************** */

class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &copy);
	WrongCat	&operator=(const WrongCat &assign);
	~WrongCat();

	void	makeSound(void) const;
};

#endif /* WRONGCAT_H */
