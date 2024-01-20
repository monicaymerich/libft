#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	int	i;
	char	*matrix;
	
	i = 0;			//Count objects that are size bytes of memory
	matrix = (char *)malloc(count);
	while(i < size)
	{
		matrix[i] = *(char *)malloc(size);
		i++;
	}
	return (matrix);
}

int	main(void)
{
	size_t	files = 3;
	size_t	columnes = 2;
	char	*matrix;	

	matrix = ft_calloc(files, columnes);
	matrix = calloc(files, columnes);
	
}
