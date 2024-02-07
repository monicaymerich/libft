/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:47:50 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/06 19:59:30 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*string;

	i = 0;
	if (!s)
		return (NULL);
	string = malloc(ft_strlen(s) + 1);
	if (!string)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
/*
char	aux(unsigned int i, char c)
{
	if (c)
		c++;
	return (c);
}

int	main(void)
{
	char	test[] = "Abcdef";
	char	res[20];

	printf("Hauria de ser: %s\n", test);
	res = ft_strmapi(test, aux);
	printf("Result =  %s\n", res);
	return (0);
}
*/
