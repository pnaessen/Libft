/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:26:21 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/11 08:13:56 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	t;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	t = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest_ptr > src_ptr && dest_ptr <= src_ptr + n)
	{
		while (n-- > 0)
			dest_ptr[n] = src_ptr[n];
	}
	else
	{
		while (t < n)
		{
			dest_ptr[t] = src_ptr[t];
			t++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
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
	return (0);
}*/