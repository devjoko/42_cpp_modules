/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:43:49 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/06 20:10:21 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	const Point a(0, 0);
	const Point b(20, 0);
	const Point c(10, 30);
	
	std::cout << "Triangle:" << std::endl;
	std::cout << "A" << a << std::endl;
	std::cout << "B" << b << std::endl;
	std::cout << "C" << c << std::endl;
	std::cout << std::endl;

	{
		const Point point(10, 15);

		std::cout << "Is P" << point << " inside the triangle ? ";
		if (bsp(a, b, c, point))
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}
	std::cout << std::endl;

	{
		const Point point(10, 0);

		std::cout << "Is P" << point << " inside the triangle ? ";
		if (bsp(a, b, c, point))
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}
	std::cout << std::endl;

	{
		const Point point(10, 30);

		std::cout << "Is P" << point << " inside the triangle ? ";
		if (bsp(a, b, c, point))
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}
	std::cout << std::endl;

	{
		const Point point(9, 30);

		std::cout << "Is P" << point << " inside the triangle ? ";
		if (bsp(a, b, c, point))
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}

	return (0);
}
