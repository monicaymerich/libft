/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:29:20 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/07 14:35:06 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ' ';
	return (c);
}
/*
int	main(void)
{
	char	test;
	char	res;

	test = '*';
	res = ft_toupper(test);
	printf("Res funcio meva: %c\n", res);
	res = toupper(test);
	printf("Res funcio original: %c\n", res);
	return (0);
}
*/
