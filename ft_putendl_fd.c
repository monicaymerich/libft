
#include "libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main(void)
{
	int	fd = 1;
	char	test[] = "HOLAhola";

	ft_putendl_fd(test, fd);
	return (0);
}
*/
