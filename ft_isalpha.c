#include <stdio.h>

int ft_isalpha(int a)
{
        if(a >= 'a' && a <= 'z'|| a >= 'Z' && a<= 'z')
            return (1);
        return (0);
}
int main()
{
    printf("%d \n", ft_isalpha('a'));
    return 0;
}
