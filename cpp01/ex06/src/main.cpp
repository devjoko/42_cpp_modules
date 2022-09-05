/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:06:50 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:30:36 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Choose 1 complain: [DEBUG] [INFO] [WARNING] [ERROR]" << std::endl;
		return (-1);
	}

	Harl harl = Harl();

	harl.complain(argv[1]);

	return (0);
}
