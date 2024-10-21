#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *cc;

	cc = malloc(sizeof(t_list));
	if(!cc)
		return (NULL);
	cc->content = content;
	cc->next = NULL;
	return (cc);
}
/*
int main()creation de nv maillon
{
	t_list *str= ft_lstnew("Hello World");
	printf("Content = %s \n",(char *)str->content);
	free(str);
	return 0;
}*/
