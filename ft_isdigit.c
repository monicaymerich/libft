/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:16:52 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 15:10:34 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int prueba = 58;
	int res;

	res = ft_isdigit(prueba);
	printf("Res ft_isigit: %d\n", res);
	res = isdigit(prueba);
	printf("Res isdigit: %d\n", res);
	return (0);
}
*/
