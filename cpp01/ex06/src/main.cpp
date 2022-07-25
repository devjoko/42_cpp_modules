/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:06:50 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 19:24:06 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		// std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		// std::cout << std::endl;
		return (-1);
	}
	Harl harl = Harl();
	harl.complain(argv[1]);
	return (0);
}
