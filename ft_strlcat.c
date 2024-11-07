/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:46:12 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/06 11:48:39 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i);
}
/*#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char dst[] = "la lune";
	char dddd[]="la lune";
	int size = 20;
	char src[] = " est un fruit";
printf("lele=%lu dest= %s, vrai = %lu",ft_strlcat(dst,src,size),dst,strlcat(dddd,src,size));
}*/