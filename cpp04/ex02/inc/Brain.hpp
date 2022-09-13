/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:47:32 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 19:27:53 by jpfuhl           ###   ########.fr       */
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

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain& rhs);
	~Brain();

	Brain& operator=(const Brain& rhs);

	void think(int i);
};

#endif /* BRAIN_H */
