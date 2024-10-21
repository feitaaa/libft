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
}/*on cree une nouvelle list en appliquant une fonction envoyer
pui si ca foire on clear sinon on fait l operation pour chaque nv mailllonnnn*/
