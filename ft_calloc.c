/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:51:21 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/22 12:25:01 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	char	*matrix;

	i = 0;
	matrix = (char *)malloc(count);
	while (i < size)
	{
		matrix[i] = *(char *)malloc(size);
		i++;
	}
	return (matrix);
}
/*
int	main(void)
{
	size_t	files = 3;
	size_t	columnes = 2;
	char	*matrix;	

	matrix = ft_calloc(files, columnes);
	matrix = calloc(files, columnes);
}
*/
