/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:38:10 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/21 02:55:46 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cd;
	const char	*cs;

	i = 0;
	if (!dest || !src)
		return (NULL);
	cd = (unsigned char *)dest;
	cs = (const unsigned char *)src;
	if (cd > cs)
		while (n-- > 0)
			cd[n] = cs[n];
	else
	{
		while (i < n)
		{
			cd[i] = cs[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char dest1[50] = "TestCarJeComprendsPas";
	char dest2[50] = "TestCarJeComprendsPas";
	printf(" %s \n" , (char *)memmove(dest1 , dest1 + 2, 4));
	ft_memmove(dest2, dest2 + 2, 4);
	printf("%s \n", dest2);
}*/
