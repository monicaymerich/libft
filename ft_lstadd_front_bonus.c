
#include "libft.h"
t_list	*ft_lstnew(void	*content);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*aux;

	if(lst && new)	
	{
		aux = *lst;
		*lst = ft_lstnew(new);
		*lst->next = aux;
	}
}


int	main(void)
{
	t_list	*list;
	t_list	*new;

	list = ft_lstnew("Test_node");
	new = ft_lstnew("New_node");
	printf("Contingut new = %s\n", (char *)new->content);
	printf("Contingut list = %s\n", (char *)list->content);

	ft_lstadd_front(&list, new);
	printf("Després de lstadd = %s\n", (char *)list->content);
	printf("seguent node = %s\n", (char *)list->next->content);

	return (0);
}

