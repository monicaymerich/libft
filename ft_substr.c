/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:26:48 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/24 12:47:56 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*substring;

	i = 0;
	j = 0;
	while (s[i] != start && s[i] != '\0')
		i++;
	if (s[i] == start)
	{
		substring = (char *)malloc(len);
		while (s[i] != '\0')
		{
			substring[j] = s[i];
			i++;
			j++;
		}
		substring[j] = '\0';
	}
	return (substring);
}
/*
int	main(int argc, char **argv)
{
	char	*res;
	
	res = ft_substr(argv[1], 'o', 10);	
	printf("Resultat substr= %s\n", res);

	return (0);
}
*/
