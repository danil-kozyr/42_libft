/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:52:37 by dkozyr            #+#    #+#             */
/*   Updated: 2018/10/24 16:52:38 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t srclength;
	size_t dstlength;
	size_t i;

	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	i = 0;
	if (dstsize < dstlength)
		return (dstsize + srclength);
	while (src[i] != '\0' && (dstlength + i + 1) < dstsize)
	{
		dst[dstlength + i] = src[i];
		i++;
	}
	dst[dstlength + i] = '\0';
	return (srclength + dstlength);
}
