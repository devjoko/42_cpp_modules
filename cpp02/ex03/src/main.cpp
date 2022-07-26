/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:43:49 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/26 23:55:48 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int	main(void)
{
	Point const	a( 0, 0 );
	Point const	b( 20, 0 );
	Point const	c( 10, 30 );
	
	std::cout << "Triangle:" << std::endl;
	std::cout << "A" << a << std::endl;
	std::cout << "B" << b << std::endl;
	std::cout << "C" << c << std::endl;
	std::cout << std::endl;

	{
		Point const	point( 10, 15 );

		std::cout << "Is P" << point << " inside the triangle ? ";
		if ( bsp( a , b, c, point ) )
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}
	std::cout << std::endl;

	{
		Point const	point( 10, 0 );

		std::cout << "Is P" << point << " inside the triangle ? ";
		if ( bsp( a , b, c, point ) )
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}
	std::cout << std::endl;

	{
		Point const	point( 10, 30 );

		std::cout << "Is P" << point << " inside the triangle ? ";
		if ( bsp( a , b, c, point ) )
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}
	std::cout << std::endl;

	{
		Point const	point( 9, 30 );

		std::cout << "Is P" << point << " inside the triangle ? ";
		if ( bsp( a , b, c, point ) )
			std::cout << "[ YES ]" << std::endl;
		else
			std::cout << "[ NO ]" << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
