/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:36:50 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/07 15:09:32 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (little[0] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		while (big[i + j] == little[j] && (little != '\0'))
		{
			j++;
			if (little == '\0')
				return (big[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
