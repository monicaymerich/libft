/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:47:55 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/22 12:14:00 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	while (i < len)
	{
		result = &((char *)haystack)[i];
		j = 0;
		while (haystack[i] == needle [j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (result);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char frase[20] = "Hola que tal?";
	char palabra[10] = "moni";	
	char	*result;
	size_t	size = 13;

	result = ft_strnstr(frase, palabra, size);
	printf("Res: %s\n", result);
	result = strnstr(frase, palabra, size);
	printf("Res original: %s\n", result);
	return (0);
}
*/
