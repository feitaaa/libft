/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:41:56 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/16 00:49:42 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)\
{
    if (c >= 97 && c <= 122)
        return(c - 32);
    return (c);
}
int main()
{
    char c = 'd';
    printf("%d \n", ft_toupper(c));
    return 0;
}