/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:13:56 by dkozyr            #+#    #+#             */
/*   Updated: 2018/10/27 18:13:57 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*str2;
	unsigned char	*str1;

	i = 0;
	b = (unsigned char)c;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	while (i < n)
	{
		str2[i] = str1[i];
		if (str1[i] == b)
		{
			return (str2 + i + 1);
		}
		i++;
	}
	return (NULL);
}
