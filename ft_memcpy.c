/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:12:10 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/06 19:29:46 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	*src = 'HOLA';
	char	*dest;	
	char	*test;
	size_t	n = 6;

	dest = malloc(sizeof(char) * 20);
	test = ft_memcpy((void *)dest, (const void *)src, n);
	printf("%s\n", test);
	test = memcpy(NULL, NULL, 3);
	printf("%s\n", test);
	free (dest);
	return(0);
}
*/
