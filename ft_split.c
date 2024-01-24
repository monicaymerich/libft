/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:07 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/24 18:31:49 by maymeric         ###   ########.fr       */
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
		while(s[i] == c)
			i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c || s[i + 1] == '\0')
			new_word++;
		i++;
	}
	return (new_word);
}


void	fn_fill(char *mat, char *s, char c) //modificar
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	if (*s == c)
	{
		while(*s == c)
			s++;
	}
	while (*s != c || *s != '\0')
	{
		mat[i] = *s;
		s++;
		i++;
	}
	printf("Mat: %s\nString que queda: %s\n\n", mat, s);
}

size_t	fn_word(const char *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	if (s[i] == c)
	{
		while(s[i] == c)
			i++;
	}
	while (s[i] != c || s[i] != '\0')
	{
		len++;
		i++;
	}
	printf("Len : %zu\n", len);
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	files;
	size_t	word_len;
	char	**res;

	i = 0;
	files = 0;
	word_len = 0;
	int words = count_tokens(s, c);
	res = (char **)malloc(sizeof(char *) * words + 1);
	while (i <= files)
	{
		word_len = fn_word(s, c);
		res[i] = (char *)malloc(word_len + 1); 
		fn_fill(res[i], (char *)s, c);
		i++;
	}
	//funcio que guardi cada paraula (recorda posar el '\0' al final despres de copiarla)
	if (!res)
	{
		while (files > 0)
			free(res[files--]);
		free(res);
	}
	res[words + 1] = NULL;
	return (res);
}

int	main(void)
{
	int 		i;
	int			num = 3;
	char const	str[] = "    hola      bon dia   ";
	char		c = ' ';
	char		**result;
	char		test[3][5];

//PRUEBA fill	fn_fill(test, str, c, 3, 5);

	i = 0;
	result = ft_split(str, c);
	while (result[i])
	{
		printf("Result = %s\n", result[i]);
		i++;
	}
	i = 0;
	while ( i < num)
	{
		free(result[i]);
		i++;
	}	
	free(result);
	return (0);
}

