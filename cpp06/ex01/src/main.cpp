/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:39:17 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 18:48:23 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** INFO
**
** It lets you take an object or group of objects, put them on a disk or send them
** through a wire or wireless transport mechanism, then later, perhaps on another computer,
** reverse the process: resurrect the original object(s). The basic mechanisms are to flatten object(s)
** into a one-dimensional stream of bits, and to turn that stream of bits back into the original object(s).
** 
** Like the Transporter on Star Trek, it’s all about taking something complicated and turning it
** into a flat sequence of 1s and 0s, then taking that sequence of 1s and 0s (possibly at another place,
** possibly at another time) and reconstructing the original complicated “something.”
**
** Link: https://isocpp.org/wiki/faq/serialization
*/

#include "../inc/Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t raw;

	std::cout << "\033[1;34mSerializing Data ...\033[0m" << std::endl;
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* deserialize(uintptr_t raw)
{
	Data* ptr;

	std::cout << "\033[1;34mDeserializing Data ...\033[0m" << std::endl;
	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

int main(void)
{
	Data test("Hello World", '!', 42);
	std::cout << test;
	std::cout << "Size : " << sizeof(test) << " bytes" << std::endl;
	std::cout << std::endl;


	uintptr_t raw;
	raw = serialize(&test);
	std::cout << "Size : " << sizeof(raw) << " bytes" << std::endl;
	std::cout << std::endl;
	

	Data* tmp;
	tmp = deserialize(raw);
	std::cout << *tmp;
	std::cout << "Size of : " << sizeof(*tmp) << " bytes" << std::endl;

	return (0);
}
