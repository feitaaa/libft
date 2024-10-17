/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:54:42 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/16 01:30:34 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while(str[i])
            i++;
		return ((char *)str + i+1);
	}
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

int main()
{
    char a[] = "matteo";
    printf("%s \n", ft_strchr(a, 't'));
    return 0;
}