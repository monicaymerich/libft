
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*string;

	i = 0;
	if(!s)
		return (NULL);

	string = malloc(ft_strlen(s) + 1);
	if (!string)
		return(NULL);
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return(string);
}

/*
int	main(void)
{
	char	test[] = "Abcdef";
	char	res[10];

	printf("Hauria de ser: %s\n", test);
	res = ft_strmapi(test, f);
	printf("Result =  %s\n", res);
	return (0);
}
*/
