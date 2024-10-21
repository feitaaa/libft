/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:46:46 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/21 02:53:22 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	size_t				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigend char)c;
		i++;
	}
	return (b);
}
/*
int main()
{
	char str[7] = "coucou";
	ft_memset(str,'e',4);
	printf("%s\n", str);
	return (0);
}*/
