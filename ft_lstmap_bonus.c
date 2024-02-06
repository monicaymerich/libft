#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;

	aux = lst;
	if(!f)
		return (NULL);
	while(lst)
	{
		aux = f(lst);
		aux = aux->next;
		lst = lst->next;
	}	
}
