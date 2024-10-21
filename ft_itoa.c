/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:02:42 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/21 00:45:09 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		l;
	int		i;
	long	nbr;
	char	*result;

	nbr = n;
	l = len(nbr);
	i = l - 1;
	result = ft_calloc(l + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (nbr == 0)
		result[0] = '0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		result[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return (result);
}
/*
int main()
{
    int nb = 2147483647;
    printf("%s \n", ft_itoa(nb));
    return 0;
}*/
