/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:43:20 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/18 12:33:19 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = &((char *)s)[i];
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	char	test[20] = "Holalala";
	char	*res;
	int		c = 'l';

	res = ft_strrchr(test, c);
	printf("res = %s\n", res);
	res = strrchr(test, c);
	printf("res = %s\n", res);
	return(0);
}
*/
