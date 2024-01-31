/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:17:10 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/31 11:10:14 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)s;
	while (*res != c && *res != '\0')
		res++;
	if (*res == c)
		return (res);
	return (NULL);
}
/*
int	main(void)
{
	char	test[20] = "teste";
	char	*res;
	int		c = 'e';

	res = ft_strchr(test, c);
	printf("res = %s\n", res);
	res = strchr(test, c);
	printf("res = %s\n", res);
	return(0);
}
*/
