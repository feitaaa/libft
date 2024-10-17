/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:51:05 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/16 17:40:09 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;
    
    i = 0;
    if(!s)
        return (NULL);
    while(s[i])
        i++;
    if (start > i)
        return(ft_strdup(""));
    if(len > i + start)
        len = i + start;
    str = (char *)malloc((len + 1 )* sizeof(char));
    if(!str)
        return NULL;
    i = 0;
    while(i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return (str);
}

int main()
{
    printf("%s \n", ft_substr("salut, bg", 3, 4));
    return 0;
}