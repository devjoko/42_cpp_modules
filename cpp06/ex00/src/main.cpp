/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:39:17 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 02:22:44 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (-1);

	Convert convert(argv[1]);
	convert.convertInput();

	return (0);
}
