/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:46:31 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/21 09:39:50 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*ct;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ct = malloc(sizeof(char) * ((i + j) + 1));
	if (!ct)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		ct[j++] = s1[i++];
	i = 0;
	while (s2[i])
		ct[j++] = s2[i++];
	ct[j + i] = '\0';
	return (ct);
}
/*aloue taille pour les 2 string + \0 apres dans la s1 on met la taille des 2 qui se fera remplir de dabord s1 puis on fait pareille pour la 
s2 juste on change pas le compteur de l adition des 2 (j) on continue dans la lance juste on rajt la s2
int main()
{
    printf("%s \n", ft_strjoin("salut", " kaka"));
    return 0;
}*/
