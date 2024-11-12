/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:36:50 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/12 10:03:12 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (little[j] != '\0') && (i + j < len))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char *big = "lorem ipsum dolor sit amet";
	char *little = "dolor";
	size_t len = 15;

	char *result = ft_strnstr(big, little, len);
	if (result)
		printf("Trouvé: %s\n", result);
	else
		printf("Pas la\n");
	return (0);
}*/
