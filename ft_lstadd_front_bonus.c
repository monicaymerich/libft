/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:14:12 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 12:18:06 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int	main(void)
{
	t_list	*list;
	t_list	*new;

	list = ft_lstnew("Test_node");
	new = ft_lstnew("New_node");
	printf("Contingut new = %s\n", (char *)new->content);
	printf("Contingut list = %s\n", (char *)list->content);

	ft_lstadd_front(&list, new);
	printf("Després de lstadd = %s\n", (char *)list->content);
	printf("seguent node = %s\n", (char *)list->next->content);

	return (0);
}
*/
