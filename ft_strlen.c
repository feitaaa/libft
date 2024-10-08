#include <stdio.h>

int ft_strlen(char *len)
{
	int i = 0;
	while(len[i])
		i++;
	return (i);
}
int main()
{
	printf("cheh = %d \n", ft_strlen("hahaha"));
	return 0;
}
