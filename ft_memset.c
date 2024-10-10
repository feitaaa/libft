#include <stdio.h>

void *ft_memset(void *b, int c, int len)
{
	int i;
	
	i = 0;
	unsigned char *ptr = b;
	while(ptr[i])
		i++;
	if (len > i)
	{
		printf("hayak pas frr max ");
		return (b);
	}
	i = 0; 
	while(len > 0)
	{
		ptr[i] = c;
		i++;
		len--;
}
	return (b);
}

#include <stdio.h>

int main()
{
	char str[7] = "coucou";
	ft_memset(str,'e',4);
	printf("%s\n", str);
	return (0);
}
