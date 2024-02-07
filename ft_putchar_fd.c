/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:52:34 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/06 19:42:10 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>
int	main(void)
{
	int	fd = 1;
	char	c = 'A';

	fd = open("test", O_RDWR);
	if (fd < 0)
		return (printf("fuck\n"));
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}*/
