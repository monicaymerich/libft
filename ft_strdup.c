/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.cc                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:52:40 by maymeric          #+#    #+#             */
/*   Updated: 2024/02/05 12:27:39 by maymeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;

	i = 0;
	if (s1)
	{
		while (s1[i] != '\0')
			i++;
		i++;
	}
	ret = (char *)malloc(i);
	if (!ret)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = '\0';
	if (ret == NULL)
		return (NULL);
	return (ret);
}
/*
int	main(int argc, char **argv)
{
	char *result;
	result =ft_strdup(argv[1]);
  	printf("Result = %s\n", result);
	result = strdup(argv[1]);
 	printf("Result original = %s\n", result);
	return (0);	
}
*/
