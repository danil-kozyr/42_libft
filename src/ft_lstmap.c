/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:45:33 by dkozyr            #+#    #+#             */
/*   Updated: 2018/10/31 14:45:35 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*newlist;

	if (!lst)
		return (NULL);
	newlist = f(lst);
	begin = newlist;
	while (lst->next)
	{
		lst = lst->next;
		if (!(newlist->next = f(lst)))
		{
			free(newlist->next);
			return (NULL);
		}
		newlist = newlist->next;
	}
	return (begin);
}
