/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:53:12 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/06 11:49:33 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[a]
		i++;
		a++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return(a);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char dst[] = "test super genial";
	char *src = "yy";
	int size = 3;
	printf("Valeur retour = %d", ft_strlcpy(dst, src, size));
//	printf("Valeur retour = %d", strlcpy(dst, src, size));
}*/
