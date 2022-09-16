/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:39:17 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 03:36:19 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* deserialize(uintptr_t raw)
{
	Data* ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

int main(void)
{
	Data test("Hello World", '!', 42);
	std::cout << test;
	std::cout << "Size : " << sizeof(test) << std::endl;

	std::cout << "Serializing Data" << std::endl;
	uintptr_t raw;

	raw = serialize(&test);
	std::cout << "Size : " << sizeof(raw) << std::endl;

	std::cout << "Deserializing Data" << std::endl;
	Data* tmp;

	tmp = deserialize(raw);
	std::cout << *tmp;
	std::cout << "Size of : " << sizeof(*tmp) << std::endl;

	return (0);
}
