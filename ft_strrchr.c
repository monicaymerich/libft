/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:43:20 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/06 15:34:56 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	test[] = "teste";
	char	*res;
	int		c = 't';

	res = ft_strrchr(test, c);
	printf("res = %s\n", res);
	res = strrchr(test, c);
	printf("res = %s\n", res);
	return(0);
}
*/
