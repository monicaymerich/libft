/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:31:19 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 14:42:23 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
		((char *)dst)[i] = '\0';
	}
	else
	{
		i = len;
		while (i > 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
		((char *)dst)[i] = '\0';
	}
	return (dst);
}
/*
int	main(void)
{
	char	*src = "hola";
	char	dest[10];
	char	test[10];
	size_t	n = 4;

	printf("Src: %s \nDest antes ft_memmove: %s\n", src, dest);
	ft_memmove(dest, src, n);
	printf("Dest despues ft_memmove: %s\n", dest);	
	memmove(test, src, n);
	printf("Dest despues de memmove original: %s\n", test);
	
	return (0);
}
*/
