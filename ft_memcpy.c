/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:34:47 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/21 09:28:02 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char		*cdest;
	const char	*csrc;

	if (!dest || !src)
		return (NULL);
	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	cdest[i] = '\0';
	return (cdest);
}
/*va simplement copier un src dans une dest en fonction d une n taille et renvoyer la dest
int main()
{
	char ye[10];
	char oo[9] = "coucou";
	ft_memcpy(ye, oo, 3);
	printf("%s \n", ye);
	return 0;
}*/
