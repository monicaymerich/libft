/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:14:54 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 14:39:35 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int prueba = 123;
	int res;

	res = ft_isalpha(prueba);
	printf("Res ft_isalpha: %d\n", res);
	res = isalpha(prueba);
	printf("Res isalpha: %d\n", res);
	return (0);
}
*/
