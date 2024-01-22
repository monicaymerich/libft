/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:03:33 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/22 15:17:00 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	siz;
	char	*result;

	i = 0;
	j = 0;
	siz = ft_strlen(s1);
	siz = siz + ft_strlen(s2);
	result = (char *)malloc(i);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(int argc, char **argv)
{
	char *test;

	test = ft_strjoin(argv[1], argv[2]);
	printf("Result = %s\n", test);
	return (0);
}
*/
