/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:55:12 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/06 20:37:35 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*list;

	list = malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
	list->next = NULL;
	list->content = content;
	return (list);
}
