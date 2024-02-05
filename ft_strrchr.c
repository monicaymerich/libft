/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:43:20 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 10:34:03 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = &((char *)s)[i];
		i++;
	}
	if (s[i] == c)
		res = &((char *)s)[i];
	return (res);
}
/*
int	main(void)
{
	char	test[] = "Teste";
	char	*res;
	int		c = '\0';

	res = ft_strrchr(test, c);
	printf("res = %s\n", res);
	res = strrchr(test, c);
	printf("res = %s\n", res);
	return(0);
}
*/
