#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*va mettre un nv maillon au debut d une liste et rendre le nv   la liste ect*/