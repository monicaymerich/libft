/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:07 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/24 12:57:04 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_tokens(char const *s, char c)
{
	int	tokens;

	tokens = 0;
	whi
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	files;
	size_t	columnes;
	char	*res;

	i = 0;
	files = 0;
	//Contar cuantes paraules reals hi ha i quina es la llargada maxima
	while (s[i] != '\0')
	{
		if (s[i] == c)
			files++;
		else
			columnes++;
	}
	res = fer matriu de (files, columnes); //Perque el calloc retorna un 'unic punter si haurien de ser dos?
	//falta guardar cada paraula en el seu lloc
	return (res);
}

int	main(int argc, char **argv)
{
	char **result;
	result = ft_split(argv[1], argv[2]);
	printf("Result = %s\n", result[0]);
	free(result);
	return (0);
}
