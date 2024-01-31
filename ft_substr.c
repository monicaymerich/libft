/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:26:48 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/31 14:28:01 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	while (i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
int	main(void)
{
   char	test[] = "HolaholaABCDEFGHIJ";
   char	*res;

   res = ft_substr(test, 0, 0);	
   printf("Resultat substr= %s\n", res);

   return (0);
}
*/
