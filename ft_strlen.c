#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i = 0;
	while(s[i])
		i++;
	return (i);
}
/*
int main()
{
	printf("cheh = %ld \n", ft_strlen("hahaha"));
	return 0;
}*/
