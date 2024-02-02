/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:50:35 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/02 16:50:52 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlen(const char *s);

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, strlen(s));
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
