/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:26:17 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 13:31:24 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char *str1 = "Hello";
	char *str2 = "HelLo";
	size_t n = 4;

	int result = ft_strncmp(str1, str2, n);
	printf("Result: %d\n", result);
	return (0);
}*/
