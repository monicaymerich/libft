/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:45:16 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 14:53:31 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
int main()
{
	char *test;
	char *resultat;

	test = malloc(sizeof(char) * 10);
	resultat = ft_memset((void *)test, 'A', 3);
	printf("ft_memset = %s\n", resultat);
	resultat = memset((void *)test, 'A', 3);
	printf("memset = %s\n", resultat);
	free(resultat);
	return (0);
}
*/
