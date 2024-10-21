#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *f))
{
	t_list	*tmp;
	
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
