#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0; //Mirar que passa si envien un str no valid
	sign = 1;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res*sign);
}

int	main(void)
{
	char	*numascii = "2147483649";
	int	numint;

	
	numint = ft_atoi(numascii);
	printf("Meu atoi: %d\n", numint);
	numint = atoi(numascii);
	printf("Atoi original: %d\n", numint);
	return(0);
}
