/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:51:21 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/24 14:50:06 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*ret;
	int		i;

	i = 0;
	total = count * size;
	ret = (char *)malloc(total);
	if (ret == NULL)
		return (NULL);
	while (i < (int)size)
	{
		ret[i] = '\0';
		i++;
	}
	return (ret);
}

int	main(void)
{
	size_t	i;
	size_t	files = 3;
	size_t	columnes = 2;
	char	*result;	

	i = 0;
	result = ft_calloc(files, columnes);
	printf("Result meu: ");
	while (i < (files * columnes))
	{	
		printf("%d", result[i]);
		i++;
	}
	printf("\n");
	i = 0;
	result = calloc(files, columnes);
	printf("Result og: ");
	while (i < (files * columnes))
	{	
		printf("%d", result[i]);
		i++;
	}
	printf("\n");
	free (result);
	return (0);
}
