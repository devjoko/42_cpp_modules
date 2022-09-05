/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:55:24 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:19:31 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                  Harl Class                                */
/* ************************************************************************** */

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif /* HARL_H */
