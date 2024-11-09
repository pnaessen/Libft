/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:43:55 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 15:33:40 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	const char str[] = "Hello, world";
	char ch = 'o';
	size_t len = 12;

	void *result

	result = ft_memchr(str, ch, len);

	if (result != NULL)
		printf("Trouvé '%c' à  %p\n", ch, result);
	else
		printf(" '%c'pas  trouvé.\n", ch);
	return (0);
}*/
