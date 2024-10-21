/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:12:10 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/21 05:57:04 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int size)
{
	size_t				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (size > i)
	{
		ptr[i] = 48;
		i++;
	}
}
/*
int main()
{
	char s[10] = "lelele";
	ft_bzero(s, 5);
	printf("%s \n", s);
	return 0;
}*/
