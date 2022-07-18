/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:32:47 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/18 19:08:56 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Contact.hpp"

Contact::Contact(void)
{
	std::cout << "CONTACT Constructor called" << std::endl;

	// this->helloWorld();
	return ; // don't have return types, but to show done writing code
}

Contact::~Contact(void)
{
	std::cout << "CONTACT Destructor called" << std::endl;
	return ;
}
