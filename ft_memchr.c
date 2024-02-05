/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:50:27 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 10:44:19 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*aux;

	aux = NULL;
	i = 0;
	while (((unsigned char *)s)[i] && i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			aux = &((char *)s)[i];
			return (aux);
		}
		i++;
	}
	if (c == '\0')
		aux = &((char *)s)[i];
	return (aux);
}
/*
int	main(void)
{
	char	test[10] = "Hola";
	char	*result;
	int		c = '\0';
	size_t	size = 8;

	result = ft_memchr((const void *)test, c, size);
	printf("Result meu: %s\n", result);
	result = memchr((const void *)test, c, size);
	printf("Result original: %s\n", result);

	return (0);
}
*/
