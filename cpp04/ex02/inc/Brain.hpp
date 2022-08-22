/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:47:32 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 20:12:28 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                    Brain Class                             */
/* ************************************************************************** */

class	Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain	&operator=(const Brain &assign);
	~Brain();

	void	printBrainAddress(void);
};

#endif /* BRAIN_H */
