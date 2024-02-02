/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:30:57 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/01 18:27:00 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_len(int n)
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

char	*ft_itoa(int n)
{
	int		len;
	int	sign;
	char	*num;
	
	len = 0;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = - n;
	}
	len = ft_len(n) + sign;
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	if (n == -2147483648)
	{
		num = "-2147483648";
		return (num);
	}
	num[len] = '\0';
	len--;
	while(n)
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
	int		test = -23;
	char	result[20];
	char	*res;

	res = result;
	res = ft_itoa(test);
	printf("Resultat en char %s\n Hauria de ser %d\n", res, test);
	return (0);
}
*/
