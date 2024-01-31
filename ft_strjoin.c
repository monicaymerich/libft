/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:03:33 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/31 15:00:04 by maymeric         ###   ########.fr       */
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
	result = (char *)malloc(siz + 1);
	if (!result)
		return (NULL);
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
int	main(void)
{
	const char	t1[] = "";
	const char	t2[] = "";
	char 		t;
	char const	*s1 = t1;
	char const	*s2 = t2;
	char		*test = &t;

	test = ft_strjoin(s1, s2);
	printf("Result = %s\n", test);
	return (0);
}
*/
