/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:14:19 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 15:16:48 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c) //Converteix en majuscula una lletra minuscula
{
	if (c >= 'A' && c <= 'Z')
		c = c + ' ';
	return (c);
}
/*
int	main(void)
{
	char	test;
	char	res;

	test = 'Z';
	res = ft_tolower(test);
	printf("Res funcio meva: %c\n", res);
	res = tolower(test);
	printf("Res funcio original: %c\n", res);
	return (0);
}
*/
