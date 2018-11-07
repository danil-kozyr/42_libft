/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:11:37 by dkozyr            #+#    #+#             */
/*   Updated: 2018/10/29 19:11:38 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	i_last_elem;
	int		count;

	i = 0;
	i_last_elem = ft_strlen(s) - 1;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c && ft_isascii(s[i + 1]))
			|| (s[i] == s[0] && ft_isascii(s[0])))
			count++;
		i++;
	}
	return (count);
}

static char		*ft_create_word(char const *s, char c, int *i)
{
	char	*str;
	int		j;

	j = 0;
	str = ft_memalloc(sizeof(s) * (ft_strlen(s)));
	if (!str)
		return (NULL);
	while (s[*i] != c && s[*i] != '\0')
	{
		str[j] = s[*i];
		j++;
		*i += 1;
	}
	str[j] = '\0';
	while (s[*i] == c && s[*i] != '\0')
		*i += 1;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	str = ft_memalloc(sizeof(str) * (ft_count_words(s, c) + 2));
	if (!str)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (j < ft_count_words(s, c) && s[i] != '\0')
	{
		str[j] = ft_create_word(s, c, &i);
		j++;
	}
	return (str);
}
