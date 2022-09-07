/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:27:20 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/07 19:29:24 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main( void )
{
	const size_t len = 5;

	char array[len] = {'H', 'E', 'L', 'L', 'O'};
	int array2[len] = {1, 2, 3, 4, 5};
	std::string array3[len] = {"This", "is", "so", "much", "fun!"};
	float array4[len] = {0.4f, 1.5f, 5.5f, 21.21f, 42.42f};
	
	std::cout << "\n** Test with chars **" << std::endl;
	iter(array, len, print);
	std::cout << "\n** Test with ints **" << std::endl;
	iter(array2, len, print);
	std::cout << "\n** Test with strings **" << std::endl;
	iter(array3, len, print);
	std::cout << "\n** Test with floats **" << std::endl;
	iter(array4, len, print);



	// int tab[] = { 0, 1, 2, 3, 4 }; // );
    // iter( tab, 5, print );
    // Awesome *A = new Awesome[5];
    // for (int i=0; i < 5; i++)
    // {
    //     std::cout << A[i];
    // }
	return 0;
}