/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:46:31 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/16 18:04:10 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i;
    size_t j;
    char *ct;

    i = 0;
    j = 0;
    
    while(s1[i])
        i++;
    while (s2[j])
        j++;
    ct = malloc(sizeof(char) * (( i + j) + 1));
    if(!ct)
        return NULL;
    i = 0;
    j = 0;    
    while(s1[i])
     {
        ct[j] = s1[i];
        i++;
        j++;
     }
     
     i = 0;
     while (s2[i])
     {
        ct[j] = s2[i];
        i++;
        j++;
     }
     ct[j] = '\0';
     return (ct);
}

int main()
{
    printf("%s \n", ft_strjoin("salut", " kaka"));
    return 0;
}