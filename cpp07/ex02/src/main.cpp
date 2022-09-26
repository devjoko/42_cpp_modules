/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:10:00 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 21:47:59 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

#define YELLOW		"\033[1;33m"
#define BLUE		"\033[1;36m"
#define END			"\033[0m"

#define MAX_VAL		750 /* for intra test */

int testIntra(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return (1);
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return (0);
}

int main(void)
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                               Testing Integers                             */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	try
	{
		Array<int> int_array_empty;
		std::cout << "Size of int_array_empty : " << int_array_empty.size() << std::endl;

		Array<int> int_array(5);
		std::cout << "Size of int_array : " << int_array.size() << std::endl;

		std::cout << "Default initialized values : ";
		for (int i = 0; i < 5; i++)
			std::cout << int_array[i] << " ";
		std::cout << std::endl;

		std::cout << BLUE << "* ASSIGN NEW VALUES *" << END << std::endl;
		for (int i = 0; i < 5; i++)
			int_array[i] = i * i * i;

		std::cout << "New values : ";
		for (int i = 0; i < 5; i++)
			std::cout << int_array[i] << " ";
		std::cout << std::endl;

		std::cout << "Trying to access out of bounds [15] :" << std::endl;
		std::cout << int_array[15] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                               Testing Strings                              */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	try
	{
		Array<std::string> str_array(3);

		std::cout << "Size of str_array : " << str_array.size() << std::endl;

		std::cout << "Default initialized strings : ";
		for (int i = 0; i < 3; i++)
			std::cout << str_array[i] << " ";
		std::cout << std::endl;

		std::cout << BLUE << "* ASSIGN NEW STRINGS *" << END << std::endl;
		str_array[0] = "Hello";
		str_array[1] = "World";
		str_array[2] = "!";

		std::cout << "New strings : ";
		for (int i = 0; i < 3; i++)
			std::cout << str_array[i] << " ";
		std::cout << std::endl;

		std::cout << "Trying to access out of bounds [-3] :" << std::endl;
		std::cout << str_array[-3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                                Testing Copies                              */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	try
	{
		Array<int> arr1(7);
		Array<int> arr2(3);

		std::cout << "Size of arr1 : " << arr1.size() << std::endl;
		std::cout << "Size of arr2 : " << arr2.size() << std::endl;

		std::cout << BLUE << "* FILLING ARR1 *" << END << std::endl;
		for (int i = 0; i < 7; i++)
			arr1[i] = i * i * i;

		std::cout << "Content of arr1 : ";
		for (int i = 0; i < 7; i++)
			std::cout << arr1[i] << " ";
		std::cout << std::endl;

		std::cout << "Content of arr2 : ";
		for (int i = 0; i < 3; i++)
			std::cout << arr2[i] << " ";
		std::cout << std::endl;

		std::cout << BLUE << "* ASSIGNING ARR1 TO ARR2 *" << END << std::endl;
		arr2 = arr1;

		std::cout << "Size of arr1 : " << arr1.size() << std::endl;
		std::cout << "Size of arr2 : " << arr2.size() << std::endl;
		
		std::cout << BLUE << "* COMPARING CONTENT OF BOTH ARRAYS *" << END << std::endl;
		for (int i = 0; i < 7; i++)
			std::cout << arr1[i] << "\t" << arr2[i] << std::endl;

		std::cout << BLUE << "* CHANGING CONTENT IN ARR2, BUT NOT ARR1 *" << END << std::endl;
		for (int i = 0; i < 7; i++)
			arr2[i] = i * i;

		for (int i = 0; i < 7; i++)
			std::cout << arr1[i] << "\t" << arr2[i] << std::endl;
		
		std::cout << BLUE << "* The change of arr2 didn't affect arr1, because a deep copy was made *" << END << std::endl;

		system ("leaks array");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                                 Intra Test                                 */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;

	testIntra();

	return (0);
}
