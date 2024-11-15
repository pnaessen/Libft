/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:41:05 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/15 10:16:20 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > 0 && nmemb * size > SIZE_MAX)
		return (NULL);
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
	char *ptr;

	n = 0;
	j = 10;
	ptr = ft_calloc(j, sizeof(char));
	if (!ptr)
		return (1);
	while (n < j)
	{
		printf("%d\n", ptr[n]);
		n++;
	}
	free(ptr);
	return (0);
}*/