#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	if(!lst)
		return ;
	else if(*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast(aux);
		aux->next = new;
	}
}
