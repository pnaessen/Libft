/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:13:58 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/06 15:15:06 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        i++;
        if (s[i] == c)
            j = i;        
    }
        return (s + j);
}