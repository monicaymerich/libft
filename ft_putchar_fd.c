
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd = 1;
	char	c = 'A';

	ft_putchar_fd(c, fd);
	return (0);
}
*/
