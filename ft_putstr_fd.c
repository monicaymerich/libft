
#include "libft.h"

size_t strlen(const char *s);

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
