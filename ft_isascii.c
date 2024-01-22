/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:52:31 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 15:09:00 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int prueba = 128;
	int res;

	res = ft_isascii(prueba);
	printf("Res ft_isascii: %d\n", res);
	res = isascii(prueba);
	printf("Res isascii: %d\n", res);
	return (0);
}
*/
