/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:53:11 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 14:49:09 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	i = 0;
	j = 0;
	ret = ft_strlen(dst) + ft_strlen(src);
	if (dstsize < ft_strlen(dst))
		ret = ft_strlen(dst) + dstsize;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ret);
}
/*
int	main(void)
{
	size_t	res;
	size_t	dstsize;
	char dst1[20] = "Hola";
	char dst2[20] = "Hola";
	char src[20] = " que tal?";

	res = 0;
	dstsize = 10;
	res = ft_strlcat(dst1, src, dstsize);
	printf("Cadena concatenada meva: %s \nRes = %zu\n", dst1, res);
	res = 0;
	res = strlcat(dst2, src, dstsize);
	printf("Cadena concatenada original: %s \nRes = %zu\n", dst2, res);
 	return (0);
}
*/
