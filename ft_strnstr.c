/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:47:55 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/31 14:49:11 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fn_aux(int len, char *haystack, char *needle, char *result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		result = &haystack[i];
		j = 0;
		while (haystack[i] == needle [j] && i < (int)len)
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	res_v;
	char	*result;

	result = &res_v;
	i = 0;
	result[i] = '\0';
	if (*haystack == '\0')
		return (result);
	else if (*needle == '\0')
		return ((char *)haystack);
	result = fn_aux((int)len, (char *)haystack, (char *)needle, result);
	return (result);
}
/*
int	main(void)
{
	char frase[] = "lorem ipsum dolor sit amet";
	char palabra[10] = "dolor";	
	char	*result;
	size_t	size = 15;

	result = ft_strnstr(frase, palabra, size);
	printf("Res: %s\n", result);
	result = strnstr(frase, palabra, size);
	printf("Res original: %s\n", result);
	return (0);
}
*/
