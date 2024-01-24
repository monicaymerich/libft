/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:07 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/24 14:50:03 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	count_tokens(char const *s, char c, size_t *files, size_t *columnes)
{
	int	new_word;
	int	word_len;
	int	i;

	i = 0;
	new_word = 0;
	word_len = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			new_word = 0;
			word_len = 0;
		}	
		else
		{	
			if (new_word == 0)
				*files = *files + 1;
			word_len++;
			if (*columnes < word_len)
				*columnes = word_len;
		}
	}
	word_len++;
}

void	fn_fill(char **matrix, char *s, char c)
{
	int	i;
	int	fila;
	int	columna;

	i = 0;
	fila = 0;
	columna = 0;
	while(s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			matrix[fila][columna] = s[i];
			columna++;
		}
		matrix[fila][columna] = '\0';
		fila++;
		columna = 0;
		i++;	
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	*files;
	size_t	*columnes;
	char	**res;

	i = 0;
	*files = 0;
	*columnes = 0;
	count_tokens(s, c, files, columnes);

	res = (char **)malloc(*files);
	while (i < *columnes)
	{
		res[i] = (char *)malloc(*columnes);
	}
	fn_fill(res, s, c);
	return (res);
}

int	main(int argc, char **argv)
{
	char	**result;
	
	result = ft_split(argv[1], argv[2][0]);
	while (
	printf("Result = %s\n", result[i]);
	
	/*El free no esta be, sha de fer dins d un bucle*/free(result);
	return (0);
}
