/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:15:46 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 10:16:08 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*aux;

	i = 0;
	aux = lst;
	while (aux->next != NULL)
		i++;
	return (i);
}
/*
int	main(void)
{
	int 	total;
	t_list	*list;
	t_list	*aux;

	aux = list;
	aux = ft_lstnew("Node1");
	aux++;
	aux = ft_lstnew("Node2");
	total = ft_lstsize(list);
	printf("Total nodos = %d\n", total);
	return (0);
}
*/
