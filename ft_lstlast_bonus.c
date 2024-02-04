#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux->next)
		aux++;
	return (aux);
}
