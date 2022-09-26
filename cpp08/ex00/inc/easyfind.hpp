/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:21:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 22:23:49 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>

template<typename T>
typename T::iterator easyfind(T& container, int val)
{
	typename T::iterator it = container.begin();

	for ( ; it != container.end(); it++)
	{
		if (*it == val)
			break ;
	}
	if (it == container.end())
		throw (std::runtime_error("error: cannot find passed value"));
	return (it);
}

#endif /* EASYFIND_H */
