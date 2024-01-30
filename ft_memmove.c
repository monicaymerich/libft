/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:31:19 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/30 20:21:56 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src > len)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest;
	char	test;
	char	*src;
	&dest = 0x7ffee6e1c540;
	&src = 0x7ffee6e1c542;
	*src = "123456";
	size_t	n = 5;

	printf("Src: %s \nDest antes ft_memmove: %s\n", src, dest);
	ft_memmove(dest, src, 4);
	printf("Dest despues ft_memmove: %s\n", dest);
	memmove(dest, src 4);
	printf("Dest despues de memmove original: %s\n", test);
	
	return (0);
}
*/
