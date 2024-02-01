/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:34 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/01 13:27:46 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

int	check_match(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	size_t	len;
	char	*result;

	i = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	j = (int)ft_strlen(s1) - 1;
	while (check_match(s1[i], set) == 1)
		i++;
   	while (check_match(s1[j], set) == 1)
		j--;
	len = j - i;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	while (i <= j)
	{
		result[k] = s1[i];
		i++;
		k++;
	}
	result[k] = '\0';
	return (result);
}

int	main(void)
{
	char	test[] = "alkjsflskjdfnskldfasofjas;ff";
	char	tr[] = "j";
	char	*result;

	result = ft_strtrim(test, tr);
	printf("Result: |%s|\n", result);
	return (0);
}
