#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	

	i = 0;
	
	char *cdest = dest;
	const char *csrc = src;
	while(n > 0)
	{
		cdest[i] = csrc[i];
		i++;
		n--;
	}
	cdest[i] = '\0';
	return cdest;
}

int main()
{
	char ye[10];
	char oo[9] = "coucou";
	ft_memcpy(ye, oo, 3);
	printf("%s \n", ye);
	return 0;
}
