#include "libft.h"

void	ft_lstdelone(t_list *lst,void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
void	del(void content)
{
	free(content);
}

int main(void)
{
	int *a = (int *)malloc
*/