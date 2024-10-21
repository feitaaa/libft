#include "libft.h"

void	ft_lstdelone(t_list *lst,void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*on del le contenue d une chaine et apres on free
void	del(void content)
{
	free(content);
}

int main(void)
{
	int *a = (int *)malloc
*/