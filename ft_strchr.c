/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:17:10 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 15:42:48 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c) //era const char
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	test[20] = "Hola";
	char	*res;
	int		c = 'l';

	res = ft_strchr(test, c);
	printf("res = %s\n", res);
	res = strchr(test, c);
	printf("res = %s\n", res);
	return(0);
}
*/
