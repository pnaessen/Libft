/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:36:50 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 13:32:55 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (little != '\0'))
		{
			j++;
			if (little == '\0')
				return (big[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char *big = "Hello";
	char *little = "World";
	size_t len = 15;

	char *result = ft_strnstr(big, little, len);
	if (result)
		printf("Trouvé: %s\n", result);
	else
		printf("Pas la\n");
	return (0);
}*/
