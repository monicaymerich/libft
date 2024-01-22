/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:59:18 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 15:13:49 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int prueba = '~';
	int res;

	res = ft_isprint(prueba);
	printf("Res ft_isprint: %d\n", res);
	res = isprint(prueba);
	printf("Res isprint: %d\n", res);
	return (0);
}
*/
