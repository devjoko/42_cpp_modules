/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:37:27 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/07 19:26:51 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_H
# define ITER_H

# include <iostream>

template<typename T>
void print(T& var)
{
	std::cout << var << std::endl;
}

template<typename T>
void iter(T* array, size_t size, void print(T&))
{
	for (size_t i = 0; i < size; i++)
		print(array[i]);
}

#endif /* ITER_H */
