/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:59:13 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/18 16:47:31 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	char	test1[10] = "Hola";
	char	test2[10] = "Hola";
	size_t	size = 5;
	int		res;

	res = ft_strncmp(test1, test2, size);
	printf("Res mio = %d\n", res);
	res = strncmp(test1, test2, size);
	printf("Res original = %d\n", res);
	res = memcmp(test1, test2, size);
	printf("memcmp = %d\n", res);
	return (0);
}
*/
