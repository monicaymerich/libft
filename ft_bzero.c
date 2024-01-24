/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:53:37 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/24 12:59:42 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	int		i;
	char	test[10] = "HOLA hola!";
	char	test2[10] = "HOLA hola!";

	ft_bzero(test, 5);
	bzero(test2, 5);
	printf("ft_bzero = [");
	i = 0;
	while (i < 10)
	{
		printf("%d", test[i]);
		if (i != 9) 
			printf(", ");
		else
			printf("]\n");
		i++;
	}
	printf("bzero = [");
	i = 0;
	while (i < 10)
	{
		printf("%d", test2[i]);
		if (i != 9)
			printf(", ");
		else
			printf("]\n");
		i++;
	}
	return (0);
}
*/
