/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:47:55 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 19:18:44 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fn_aux(size_t len, char *haystack, char *needle)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	while (i < len && haystack[i])
	{
		result = &haystack[i];
		j = 0;
		while ((i + j) < len && haystack[i + j] && needle [j] \
			&& haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (result);
		}
		if (needle[j] == '\0')
			return (result);
		else if (haystack[i] == '\0')
			return (NULL);
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
	if (*needle == '\0')
		return ((char *)haystack);
	else if (*haystack == '\0')
		return (NULL);
	result = fn_aux(len, (char *)haystack, (char *)needle);
	return (result);
}
/*
int	main(void)
{
	char *frase = strdup("abc");
	char *palabra = strdup("abcdef");	
	char	*result;
	size_t	size = 10;
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	result = ft_strnstr(haystack, needle, 5);
	printf("Res: %s\n", result);
	result = strnstr(haystack, needle, 5);
	printf("Res original: %s\n", result);
	return (0);
}
*/
