/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:44:53 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/12 09:18:48 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[20] = "Hello, world";

	printf("Avant : %s\n", str);
	ft_memset(str, '*', 5);
	printf("Après : %s\n", str);
	return (0);
}*/
