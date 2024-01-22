/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:54:26 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/18 16:46:53 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (((char *)s1)[i] != '\0' && ((char *)s2)[i] != '\0' && i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	if (i < n)
		return (((char *)s1)[i] - ((char *)s2)[i]);
	return (0);
}
/*
int	main(void)
{
	char	test1[10] = "Holi";
	char	test2[10] = "Hola";
	size_t	size = 5;
	int		res;

	res = ft_memcmp(test1, test2, size);
	printf("Res mio = %d\n", res);
	res = memcmp(test1, test2, size);
	printf("memcmp = %d\n", res);
	return (0);	
}
*/
