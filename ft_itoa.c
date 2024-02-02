/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:30:57 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/02 19:30:53 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static int	check_sign(int *n)
{
	int	sign;

	if (*n < 0)
	{
		sign = 1;
		*n = -*n;
	}
	else
		sign = 0;
	return (sign);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	sign = check_sign(&n);
	len = ft_len(n) + sign;
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	len--;
	while (n > 0)
	{
		num[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (sign == 1)
		num[len] = '-';
	return (num);
}
/*
int	main(void)
{
	int		test = 0;
	char	result[20];
	char	*res;

	res = result;
	res = ft_itoa(test);
	printf("Resultat en char %s\n Hauria de ser %d\n", res, test);
	return (0);
}
*/
