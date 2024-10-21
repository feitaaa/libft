#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;
	while(*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}
/*on cree un variable ou on met lst puis tant que '\0' 
on stock le ptr suivant dans tmp en suppriment 
le present avc la f puis on recup la valeur
du suivant ect pui on free vu que on a supp 
void	del(void *content);
{
	free(content);
}*/
