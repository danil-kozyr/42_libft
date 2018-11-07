/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:39:44 by dkozyr            #+#    #+#             */
/*   Updated: 2018/10/25 12:39:45 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dest, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!dest[i])
		return ((char *)src);
	while (src[i] != '\0' && i < len && j < len)
	{
		j = 0;
		k = i;
		while (dest[j] == src[i + j] && j < len && k < len)
		{
			if (dest[j + 1] == '\0')
				return ((char *)src + i);
			else if (dest[j + 1] != src[i + j + 1] && dest[j + 1] == '\0')
				return (NULL);
			j++;
			k++;
		}
		i++;
	}
	return (NULL);
}
