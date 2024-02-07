/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:53:11 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/06 15:31:45 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	i = 0;
	j = 0;
	ret = ft_strlen(dst) + ft_strlen(src);
	if (dstsize < ft_strlen(dst))
		ret = ft_strlen(src) + dstsize;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < dstsize - 1 && dstsize > 0)
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
	char dst1[20] = "Bon ";
	char dst2[20] = "Bon ";
	char src[20] = "dia!";

	res = 0;
	dstsize = 0;
	res = ft_strlcat(dst1, src, dstsize);
	printf("Cadena concatenada meva: %s \nRes = %zu\n", dst1, res);
	res = 0;
	res = strlcat(dst2, src, dstsize);
	printf("Cadena concatenada original: %s \nRes = %zu\n", dst2, res);
 	return (0);
}
*/
