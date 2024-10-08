#include <stdio.h>

int ft_isascii(int c)
{
	if(c >= 0 && c <= 63)
		return (1);
	return (0);
}

int main()
{
	printf("%d \n", ft_isascii('	'));
	return (0);
}
