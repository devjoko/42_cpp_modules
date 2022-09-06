/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:47:46 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/07 01:57:45 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template<class T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template<class T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif /* WHATEVER_H */
