#include <stdio.h>

void ft_bzero(void *s, int size)
{
	int i;
	i = 0;
	unsigned char *ptr = s;
	while(size > 0)
	{
		ptr[i] = 48;
		
		i++;
		size--;
	}
}

int main()
{
	char s[10] = "lelele";
	ft_bzero(s, 5);
	printf("%s \n", s);
	return 0;
}
