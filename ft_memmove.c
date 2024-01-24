/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:31:19 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/24 16:23:30 by maymeric         ###   ########.fr       */
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
	}
	else
	{
		i = len;
		while (i > 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	*src = "Hola";
	char	dest[10] = "Sunshine";
	char	test[10] = "Sunshine";
	size_t	n = 5;

	printf("Src: %s \nDest antes ft_memmove: %s\n", src, dest);
	ft_memmove(dest, src, n);
	printf("Dest despues ft_memmove: %s\n", dest);
	memmove(test, src, n);
	printf("Dest despues de memmove original: %s\n", test);
	
	return (0);
}
*/
