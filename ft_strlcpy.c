/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:13:34 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 14:50:09 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	res;

	i = 0;
	res = ft_len(src);
	if (dstsize > 0)
	{
		while ((src[i] != '\0') && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (res);
}
/*
int	main(void)
{
	char 	dst[10] = "Hola";
	char 	src[10];
	size_t	size;
	size_t	res;

	size = 4;
	printf("Dst antes strlcpy: %s\n", dst);
	res = ft_strlcpy(dst, src, size);
	printf("Dst despues ft_strlcpy: %s\n", dst);
	printf("Size despues: %zu\n", size);
	res = strlcpy(dst, src, size);
	printf("Dst despues strlcpy original: %s\n", dst);
	printf("Size despues: %zu\n", size);
	return (0);
}
*/
