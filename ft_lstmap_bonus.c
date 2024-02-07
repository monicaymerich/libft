/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:53:10 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/07 13:00:41 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		node = ft_lstnew(tmp);
		if (!node)
		{
			ft_lstclear(&new, del);
			free(tmp);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
