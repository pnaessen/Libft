/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:08:58 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 16:30:55 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int len;
    long int nb;
    char *res;

    len = 1;
    nb = (long int)n;
    if (nb < 0)
    {
        nb = -nb;
        len++;
    }
    while (nb >= 10)
    {
        nb /= 10;
        len++;
    }
    res = (char *)malloc(sizeof(char) * len + 1);
    if (res == NULL)
        return (NULL);
    nb = (long int)n;
    if (nb < 0)
        nb = -nb;
    while (len > 0)
    {
        res[len - 1] = nb % 10 + '0';
        nb /= 10;
        len--;
    }
    if (n < 0)
        res[0] = '-';
    return (res);
}