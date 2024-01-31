/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:54:26 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/31 11:47:09 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	if (i < n)
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
/*
int	main(void)
{
	char	test1[10] = "abc";
	char	test2[10] = "abc";
	size_t	size =7;
	int		res;

	res = ft_memcmp(test1, test2, size);
	printf("Res mio = %d\n", res);
	res = memcmp(test1, test2, size);
	printf("memcmp = %d\n", res);
	return (0);	
}
*/
