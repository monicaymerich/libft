#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list 	*new;

	aux = lst;
	new = aux;
	if(!f)
		return (NULL);
	while(lst)
	{
		aux = f(lst);
		aux = aux->next;
		lst = lst->next;
	}
	return (new);	
}
