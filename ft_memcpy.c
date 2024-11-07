/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:52:33 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/07 13:32:41 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t  i;
    
    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (d == s || d[i] == '\0' && s[i] == '\0')
        return(dst);
    while (i < n)
    {
        d[i] = s[i];
        i++;
        return(dst);
    }   
}