/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:58:07 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/02 20:00:37 by maymeric         ###   ########.fr       */
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

/*
int	main(void)
{
	t_list hola;
	t_list	*punt;
	char	test[] = "Hola";

	punt = ft_lstnew(test);
	printf("Contingut = %s\n", punt->content);
	
	hola.content = test;
	printf("Contingut = %s\n", hola.content);

	return (0);
}
*/
