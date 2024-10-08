#include <stdio.h>

void *ft_memset(void *b, int c, int len)
{
	int i;
	i = 0;
	char *ptr = b;
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
	char str[5] = "couco";
	ft_memset(str,'e',5);
	printf("%s\n", str);
	return (0);
}
