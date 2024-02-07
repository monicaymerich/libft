/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:07 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/06 19:58:52 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tokens(const char *s, char c)
{
	int	tokens;
	int	i_token;

	tokens = 0;
	while (*s)
	{
		i_token = 0;
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			if (i_token == 0)
			{
				tokens++;
				i_token++;
			}
			++s;
		}
	}
	return (tokens);
}

static int	ft_word_len(const char *s, char c)
{
	int	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**mat_free(char **mat, int n)
{
	if (!mat[n])
	{
		while (n >= 0)
		{
			free(mat[n]);
			n--;
		}
		free (mat);
	}
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	int		len;
	int		i;
	int		sl;

	i = -1;
	len = count_tokens(s, c);
	matrix = (char **)malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (NULL);
	while (++i < len)
	{
		while (*s == c)
			s++;
		sl = ft_word_len((const char *)s, c);
		matrix[i] = (char *)malloc(sizeof(char) * sl + 1);
		if (!matrix[i])
			return (mat_free(matrix, i));
		ft_strlcpy(matrix[i], s, sl + 1);
		s = (ft_strchr(s, (int)c));
	}
	matrix[i] = 0;
	return (matrix);
}
/*
int	main(int argc, char **argv)
{
	int 		i;
	char		c = ' ';
	char		**result;

	i = 0;
	(void)argc;
	(void)argv;
	result = ft_split(NULL, '.');
	if (!result)
		return (0);
	printf("Resultat =\n");
	while (result[i])
	{
		printf("- |%s|\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}	
	free(result);
	return (0);
}
*/
