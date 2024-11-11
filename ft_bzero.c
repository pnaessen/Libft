/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:47:11 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/11 12:27:26 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
   int n;
   char str[] = "Hello test";

   n = 0;
   ft_bzero(str, 10);
   while (n < 10)
   {
		printf("%c\n ", str[n]);
		n++;
   }
}*/