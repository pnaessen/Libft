/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:26:17 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/12 10:33:30 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		if (t1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char *str1 = "lorem ipsum dolor sit amet";
	char *str2 = "dolor";
	size_t n = 15;

	int result = ft_strncmp(str1, str2, n);
	printf("Result: %d\n", result);
	return (0);
}*/
