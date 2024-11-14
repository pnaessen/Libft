/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:47:15 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/11 08:12:19 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	nb;

	sign = 1;
	i = 0;
	nb = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (((final * 10) + (nptr[i] - '0')) > 9223372036854775807 && sign == 1)
			return (-1);
		else if (((final * 10) + (nptr[i] - '0')) > 9223372036854775807 && sign == -1)
			return (0);
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}
/*#include <stdio.h>
int	main(void)
{
	char *nptr = "  -98545";
	printf("%d", ft_atoi(nptr));
}*/