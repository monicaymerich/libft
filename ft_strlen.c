/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:06:30 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 13:27:38 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	total;
	char	*aux;

	total = 0;
	aux = (char *)s;
	while (*aux != '\0')
	{
		total++;
		aux++;
	}
	return (total);
}
/*
int	main(void)
{
	const char *test = "hola .!@ ";
	size_t resultat;

	resultat = ft_strlen(test);
	printf("%zu\n", resultat);
	resultat = strlen(test);
	printf("%zu\n", resultat);
	return (0);
}
*/
