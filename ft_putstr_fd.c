/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:50:35 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/07 14:41:06 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	int		fd = 1;
	char	s[] = "HOLA";

	ft_putstr_fd(s, fd);
	printf("\n");
	return (0);
}
*/
