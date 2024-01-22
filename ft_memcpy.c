/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:12:10 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 14:51:10 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	*src = "Hola";
	char	*dest;	
	char	*test;
	size_t	n = 6;

	dest = malloc(sizeof(char) * 20);
	test = ft_memcpy((void *)dest, (const void *)src, n);
	printf("%s\n", test);
	test = memcpy((void *)dest, (const void *)src, n);
	printf("%s\n", test);
	free (dest);
	return(0);
}
*/
