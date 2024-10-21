#include "libft.h"

t_list *ft_lstmap(t_list *lst, void(*f)(void *),void (*del)(void *))
{
	t_list *new;
	t_list *m;

	
	if(!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		m = ft_lstnew(f(lst->content));
		if (!m)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, m);
		lst = lst->next;
	}
	return (new);
}
