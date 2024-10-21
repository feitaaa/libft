/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:24:23 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/21 03:12:35 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigchaine, const char *sschaine, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if ((bigchaine == NULL && sschaine == NULL) || (bigchaine == NULL && n == 0))
		return (NULL);
	if (sschaine[0] == '\0')
		return ((char *) bigchaine);
	while (bigchaine[i] && i < n)
	{
		while (bigchaine[i + j] == sschaine[j] && bigchaine[i + j] && i + j < n)
		{
			j++;
			if (sschaine[j] == 0)
				return ((char *)bigchaine + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
int main()
{
    printf("%s \n", ft_strnstr("salutbg", "lu", 4));
    return 0;    
}*/
