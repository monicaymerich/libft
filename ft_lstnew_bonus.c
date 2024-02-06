#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*list;

	list = malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
	list->next = NULL;
	list->content = content;
	return (list);
}

