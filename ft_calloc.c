/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:51:21 by maymeric          #+#    #+#             */
/*   Updated: 2024/01/22 17:26:37 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size) //multiplicar count * size mateix q malloc pero plenar de 0
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
