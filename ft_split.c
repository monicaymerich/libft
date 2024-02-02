/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:07 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/02 16:50:15 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_tokens(const char *s, char c)
{
	int	new_word;
	int	i;

	i = 0;
	new_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			new_word++;
		i++;
	}
	return (new_word);
}

void	fn_fill(char *mat, char *s, char c, int *pos)
{
	int		i;

	i = 0;
	if (s)
	{
		if (s[*pos] == c)
		{
			while (s[*pos] == c)
				*pos = *pos + 1;
		}
		while (s[*pos] != c && s[*pos] != '\0')
		{
			mat[i] = s[*pos];
			*pos = *pos + 1;
			i++;
		}
		mat[i] = '\0';
	}
}

size_t	fn_word(const char *s, char c, int pos)
{
	size_t	len;

	len = 0;
	if (!s)
		return (len);
	if (s[pos] == c)
	{
		while (s[pos] == c)
			pos++;
	}
	while (s[pos] != c && s[pos] != '\0')
	{
		len++;
		pos++;
	}
	return (len);
}

void	mat_free(char **mat, int n)
{
	if (!mat)
	{
		while (n > 0)
		{
			free (mat[n]);
			n--;
		}
		free (mat);
	}
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		words;
	int		pos;
	size_t	word_len;
	char	**res;

	i = 0;
	pos = 0;
	word_len = 0;
	words = count_tokens(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		word_len = fn_word(s, c, pos);
		res[i] = malloc(sizeof(char) * (word_len + 1));
		if (!res[i])
			mat_free(res, i - 1);
		else if (i < words)
			fn_fill(res[i], (char *)s, c, &pos);
		i++;
	}
	res[i] = NULL;
	return (res);
}
/*
int	main(void)
{
	int 		i;
	int			num;
	char const	*str = "hello!";
	char		c = ' ';
	char		**result;

	i = 0;
	num = count_tokens(str, ' ');
	printf("Count words: %d\n", num);
	result = ft_split(str,' ');
	if(result[0] == NULL)
		printf("ERROR\n");
	if (!result)
		return (0);
	printf("Resultat =\n");
	while (result[i])
	{
		printf("- %s\n", result[i]);
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
