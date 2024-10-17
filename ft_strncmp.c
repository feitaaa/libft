/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:31:22 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/16 01:45:59 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(s1[i] && s2[i] && i < n)
    {
        if(s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
     i++;
    }
    return (0);
}

int main()
{
    char s1[] = "abc";
    char s2[] = "abc";
    printf("%d \n", ft_strncmp(s1, s2, 2));
    return 0;
}