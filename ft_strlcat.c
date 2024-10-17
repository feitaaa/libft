/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:54:52 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/16 00:54:53 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t m;
	size_t l;
	size_t dsize;
	size_t ssize;
	
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dsize = i;
	while(src[j])
		j++;
	ssize = j;
	if (dstsize == 0)
		return ssize;
	if (dstsize <= dsize)
		return (dstsize + ssize);
	m = dsize;
	l = 0;
	while ((m + l) < (dstsize - 1) && src[l])
	{
		dest[m + l] = src[l];
		l++;
	}
	dest[m +l] = '\0';
	return (dsize + ssize);
}

int main()
{
	char a[40] = "bonjour";
	char b[40] = "salut";
	printf("%ld \n", ft_strlcat( a, b, 7));
	return 0;
}
