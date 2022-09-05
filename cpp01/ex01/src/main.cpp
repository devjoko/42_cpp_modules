/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:24:04 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:34:57 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	int size;
	Zombie *horde;

	size = 7;
	horde = zombieHorde(size, "[¬º-°]¬");
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
		horde[i].announce();
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			horde[i].setName("(¬ ﾟ-°)¬");
		horde[i].announce();
	}
	std::cout << std::endl;

	std::cout << "Awwwrrr, there are too many.. Kill 'em with fire!" << std::endl;
	delete[] horde;

	return (0);
}
