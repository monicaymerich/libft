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

int	get_exp(int n)
{
	int	exp;

	exp = 1;
	while (n > 9)
	{
		n = n / 10;
		exp = exp * 10;
	}
	printf("Exp = %d\n", exp);
	return (exp);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		exp;
	int		aux;
	char	*num;

	(void) exp;
	(void) aux;
	i = 0;
	len = ft_len(n);
	printf("len = %d\n", len);
	num = malloc(sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	if (n == -2147483648)
	{
		num = "-2147483648";
		return (num);
	}
	if (n < 0)
		len++;

	num[len] = '\0';
	while(n)
	{
		num[len] = (n % 10) + '0';
		n = n / 10;
		printf("len = %d\nnum[len] = %c\n", len, num[len]);
		len--;
	}
	/*
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
		n = n - aux * exp;
		i++;
	}
	num[i] = '\0';*/
	return (num);
}
/*
int	main(void)
{
    int		test;
    char	result[20];
	char	*res;

	res = result;
    test = 1000;
    res = ft_itoa(test);
    printf("Resultat en char %s\n Hauria de ser %d\n", res, test);
    return (0);
}
*/
