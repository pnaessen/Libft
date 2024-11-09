/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:26:21 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 15:47:45 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*temp2;
	size_t			i;

	i = 0;
	temp = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	if (temp == temp2)
		return (dest);
	if (temp < temp2)
	{
		while (i < n)
		{
			temp[i] = temp2[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			temp[n - 1] = temp2[n - 1];
			n--;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, World!";
    char dest[50];

    //printf("Avant %s\n", src);
    //ft_memmove(dest, src, 13);
    //printf("Après %s\n", dest);

    char overlap[] = "Overlap Test";
    ft_memmove(overlap + 1, overlap, 2);
    printf("Après overlap %s\n", overlap);
	
	 char overlapo[] = "Overlap Test";
    memmove(overlapo + 1, overlapo, 2);
    printf("Après overlap %s\n", overlapo);
    return 0;
}