/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:23:48 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/22 18:28:44 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

int	main(void)
{
	AMateria	*ice = new Ice("ice");

	std::cout << ice->getType() << " " << &ice <<std::endl;
	AMateria	*copy = ice->clone();
	std::cout << copy->getType() << " " << &copy << std::endl;

	delete ice;
	delete copy;

	return (0);
}
