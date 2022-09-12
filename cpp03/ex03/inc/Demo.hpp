/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Demo.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:09:22 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 16:51:05 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DEMO_H
# define DEMO_H

#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*                                   Demo Class                               */
/* ************************************************************************** */

class Demo
{
private:
	bool _demoRunning;

	void _printInfo();
	bool _checkInput(std::string input, int& index);
	void _chooseExample(int index);
	void _showHybridInheritance(void);
	void _showConstructor(void);
	void _showDeath(void);
	void _showInheritedFunctions(void);
	void _showFight(void);
	void _exitDemo(void);
public:
	Demo();
	Demo(const Demo& rhs);
	~Demo();

	Demo& operator=(const Demo& rhs);

	void runDemo(void);

	bool getStatus(void) const;
};

#endif /* DEMO_H */
