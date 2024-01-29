/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:30:57 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/29 13:49:05 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n > 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	get_exp(int n)
{
	int	exp;

	exp = 1;
	while (n > 9)
	{
		n = n / 10;
		exp = exp * 10;
	}
	return (exp);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		exp;
	int		aux;
	char	*num;

	i = 0;
	len = ft_len(n);
	num = malloc(sizeof(char) * len + 1);
	if (n == -2147483648)
	{
		num = "-2147483648";
		return (num);
	}
	if (n < 0)
	{
		num[i] = '-';
		n = -n;
		i++;
	}
	while (n)
	{
		exp = get_exp(n);
		aux = n / exp;
		num[i] = aux + '0';
		num = num - aux * exp;
		i++;
	}
	num[i] = '\0';
	return (num);
}
/*
int	main(void)
{
    int		test;
    char	result[20];
	char	*res;

	res = result;
    test = 980;
    res = ft_itoa(test);
    printf("Resultat en char %s\n Hauria de ser %d\n", result, test);
    return (0);
}
*/
