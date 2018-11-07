/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:57:13 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/01 14:57:14 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	\t == 09 == horizontal tab
**	\n == 10 == new line
**	\v == 11 == vertical tab
**	\f == 12 == form feed
**	\r == 13 == carriage return
**	sp == 32 == space
*/

#include "libft.h"

int	ft_isspace(int a)
{
	return ((a >= 9 && a <= 13) || a == 32);
}
