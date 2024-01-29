/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:07 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/29 16:28:23 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_tokens(char const *s, char c)
{
	int	new_word;
	int	i;

	i = 0;
	new_word = 0;
	if (s[i] == c)
	{
		while (s[i] == c)
			i++;
	}
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			new_word++;
		i++;
	}
	return (new_word);
}

void	fn_fill(char *mat, char *s, char c, int *pos)
{
	int		i;

	i = 0;
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

size_t	fn_word(const char *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	if (!s)
		return (len);
	if (s[i] == c)
	{
		while (s[i] == c)
			i++;
	}
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
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

char	**ft_split(char const *s, char c)
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
	res = (char **)malloc(sizeof(char *) * words + 1);
	if (!res)
		return (res);
	while (i <= words)
	{
		word_len = fn_word(s, c);
		res[i] = (char *)malloc(word_len + 1);
		if (!res[i])
		   mat_free(res, i-1);	
		else if (i < words)
			fn_fill(res[i], (char *)s, c, &pos);
		else if (i == words)
			res[i] = NULL;
		i++;
	}
	return (res);
}

int	main(void)
{
	int 		i;
	int			num = 3;
	char const	str[] = "holaaa";
	char		c = ' ';
	char		**result;

	i = 0;
	result = ft_split(str, c);
	printf("Resultat =");
	while (result[i])
	{
		printf(" %s", result[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while ( i < num)
	{
		free(result[i]);
		i++;
	}	
	free(result);
	return (0);
}

