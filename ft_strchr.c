/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:17:10 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 13:11:47 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	while (*res != (unsigned char)c && *res != '\0')
		res++;
	if (*res == (unsigned char)c || (unsigned char)c == '\0')
		return (res);
	return (NULL);
}
/*
int	main(void)
{
	char	test[] = "teste";
	char	*res;
	int		c = '\0';
	
	res = ft_strchr(test, c);
	printf("res = %s\n", res);
	res = strchr(test, c);
	printf("res = %s\n", res);
	return(0);
}
*/
