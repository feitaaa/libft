/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:50:39 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/16 04:15:02 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 0;
    i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
            || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
            i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign++;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    if (sign % 2 == 0)
        return (result);
    return (-result);
}

int main()
{
    
    printf("%d \n", ft_atoi("       ---+-783u874neund"));
    return 0;
}