/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:47:15 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/15 13:19:13 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_overflow(long unsigned nb)
{
	if (nb > 9223372036854775807)
		return (0);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int				sign;
	int				i;
	long unsigned	nb;

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
		if (ft_overflow(nb * 10 + (nptr[i] - '0')) && sign == 1)
			return (-1);
		if (ft_overflow(nb * 10 + (nptr[i] - '0')) && sign == -1)
			return (0);
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}
