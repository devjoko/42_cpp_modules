/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:51:40 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/06 20:06:35 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	SOURCE OF THE MATHEMATICS USED
**	https://math.stackexchange.com/a/51459
*/

#include "../inc/Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	const Fixed crossDivider((a.getCrossProduct(b) + b.getCrossProduct(c) + c.getCrossProduct(a)));
	const Fixed crossA((b.getCrossProduct(c) + point.getCrossProduct((b - c))));
	const Fixed crossB((c.getCrossProduct(a) + point.getCrossProduct((c - a))));
	const Fixed crossC((a.getCrossProduct(b) + point.getCrossProduct((a - b))));
	const Fixed barycentricWeightA(crossA / crossDivider);
	const Fixed barycentricWeightB(crossB / crossDivider);
	const Fixed barycentricWeightC(crossC / crossDivider);

	int inside = 0;

	if (Fixed(0) < barycentricWeightA && barycentricWeightA < Fixed(1))
		inside += 1;
	if (Fixed(0) < barycentricWeightB && barycentricWeightB < Fixed(1))
		inside += 1;
	if (Fixed(0) < barycentricWeightC && barycentricWeightC < Fixed(1))
		inside += 1;

	if (inside == 3)
		return (true);
	return (false);
}
