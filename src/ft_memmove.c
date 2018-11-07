/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:57:46 by dkozyr            #+#    #+#             */
/*   Updated: 2018/10/27 20:57:47 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		j;
	char	*str1;
	char	*str2;

	i = -1;
	j = (int)len;
	str1 = (char *)src;
	str2 = (char *)dst;
	if (str1 < str2)
		while (--j >= 0)
		{
			str2[j] = str1[j];
		}
	else
	{
		while (++i < len)
		{
			str2[i] = str1[i];
		}
	}
	return (dst);
}
