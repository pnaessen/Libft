/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:41:05 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/07 14:59:17 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
 {
	int n;
	int j;

	n = 0;
	j = 10;
	ft_calloc(j, 10);
	while (n < 10)
	{
		printf("%c\n ", ptr[n]);
		n++;
	}
 }*/