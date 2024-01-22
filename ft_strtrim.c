/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:34 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/22 15:33:13 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	size_t	len;
	char	*result;

	i = 0;
	k = 0;
	len = ft_strlen(s1);
	result = (char *)malloc(len);
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0' && set[j] != s1[i])
			j++;
		if (set[j] == '\0')
		{
			result[k] = s1[i];
			k++;
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
int	main(int argc, char **argv)
{
	char	*result;

	result = ft_strtrim(argv[1], argv[2]);
	printf("Result: %s\n", result);
	return (0);
}
*/
