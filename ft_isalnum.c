/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:14:10 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/17 15:09:54 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0)
		return (ft_isalpha(c));
	else if (ft_isdigit(c) != 0)
		return (ft_isdigit(c));
	return (0);
}
/*
int	main(void)
{
	int prueba = 68;
	int res;

	res = ft_isdigit(prueba);
	printf("Res ft_isalnum: %d\n", res);
	res = isdigit(prueba);
	printf("Res isalnum: %d\n", res);
	return (0);
}
*/
