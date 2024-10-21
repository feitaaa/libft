#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if(!last)
		*lst = new;
	last->next = new;
}
/*lstchn rendre un nouveau maillot dernier ect on le place a la fin avc lastlst puis on dit que new 
est last qui pointe vers next*/
