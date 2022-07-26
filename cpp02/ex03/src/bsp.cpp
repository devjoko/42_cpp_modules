/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:51:40 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/26 23:44:51 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	SOURCE OF THE MATHEMATICS USED
**	https://math.stackexchange.com/a/51459
*/

#include "../inc/Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed const	crossDivider( ( a.getCrossProduct( b ) + b.getCrossProduct( c ) + c.getCrossProduct( a ) ) );
	Fixed const	crossA( ( b.getCrossProduct( c ) + point.getCrossProduct( ( b - c ) ) ) );
	Fixed const	crossB( ( c.getCrossProduct( a ) + point.getCrossProduct( ( c - a ) ) ) );
	Fixed const	crossC( ( a.getCrossProduct( b ) + point.getCrossProduct( ( a - b ) ) ) );
	Fixed const	barycentricWeightA( crossA / crossDivider );
	Fixed const	barycentricWeightB( crossB / crossDivider );
	Fixed const	barycentricWeightC( crossC / crossDivider );

	int	inside = 0;

	if ( Fixed( 0 ) < barycentricWeightA && barycentricWeightA < Fixed( 1 ) )
		inside += 1;
	if ( Fixed( 0 ) < barycentricWeightB && barycentricWeightB < Fixed( 1 ) )
		inside += 1;
	if ( Fixed( 0 ) < barycentricWeightC && barycentricWeightC < Fixed( 1 ) )
		inside += 1;

	if ( inside == 3 )
		return ( true );
	return ( false );
}
